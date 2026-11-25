#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PASS_LEN 256

typedef struct {
    int upper;
    int lower;
    int digit;
    int special;
} CharCategories;

static int is_special_ascii(unsigned char ch) {
    // Printable ASCII excluding alphanumeric and space
    return ((ch >= 33 && ch <= 47) ||
            (ch >= 58 && ch <= 64) ||
            (ch >= 91 && ch <= 96) ||
            (ch >= 123 && ch <= 126));
}

static CharCategories analyze_categories(const char *s) {
    CharCategories cats = {0, 0, 0, 0};
    for (size_t i = 0; s[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)s[i];
        if (ch >= 'A' && ch <= 'Z') {
            cats.upper = 1;
        } else if (ch >= 'a' && ch <= 'z') {
            cats.lower = 1;
        } else if (ch >= '0' && ch <= '9') {
            cats.digit = 1;
        } else if (is_special_ascii(ch)) {
            cats.special = 1;
        }
    }
    return cats;
}

static double compute_similarity(CharCategories pattern, CharCategories attempt) {
    int pattern_active = pattern.upper + pattern.lower + pattern.digit + pattern.special;
    if (pattern_active == 0) {
        return 0.0;
    }

    int matched = 0;
    if (pattern.upper && attempt.upper) matched++;
    if (pattern.lower && attempt.lower) matched++;
    if (pattern.digit && attempt.digit) matched++;
    if (pattern.special && attempt.special) matched++;

    return ((double)matched / pattern_active) * 100.0;
}

int main(void) {
    int participants;
    printf("Enter number of participants: ");
    if (scanf("%d", &participants) != 1 || participants <= 0) {
        printf("Invalid number of participants.\n");
        return 1;
    }

    char pattern_buf[MAX_PASS_LEN];
    printf("Enter password pattern string (e.g., Aa#91!): ");
    if (scanf("%255s", pattern_buf) != 1) {
        printf("Failed to read pattern.\n");
        return 1;
    }

    char *pattern = (char *)malloc((strlen(pattern_buf) + 1) * sizeof(char));
    if (pattern == NULL) {
        printf("Memory allocation failed for pattern string.\n");
        return 1;
    }
    strcpy(pattern, pattern_buf);

    char **attempts = (char **)malloc((size_t)participants * sizeof(char *));
    double *scores = (double *)malloc((size_t)participants * sizeof(double));
    if (attempts == NULL || scores == NULL) {
        printf("Memory allocation failed for participants.\n");
        free(pattern);
        free(attempts);
        free(scores);
        return 1;
    }

    CharCategories pat_cats = analyze_categories(pattern);

    for (int i = 0; i < participants; i++) {
        char attempt_buf[MAX_PASS_LEN];
        printf("Enter password attempt for participant %d: ", i + 1);
        scanf("%255s", attempt_buf);

        attempts[i] = (char *)malloc((strlen(attempt_buf) + 1) * sizeof(char));
        if (attempts[i] == NULL) {
            printf("Memory allocation failed for attempt %d.\n", i + 1);
            for (int j = 0; j < i; j++) {
                free(attempts[j]);
            }
            free(attempts);
            free(scores);
            free(pattern);
            return 1;
        }
        strcpy(attempts[i], attempt_buf);

        CharCategories att_cats = analyze_categories(attempts[i]);
        scores[i] = compute_similarity(pat_cats, att_cats);
    }

    int best_idx = 0;
    printf("\n--- Similarity Results (Pattern: %s) ---\n", pattern);
    for (int i = 0; i < participants; i++) {
        printf("Participant %d | Password: %-15s | Similarity: %.2f%%\n",
               i + 1, attempts[i], scores[i]);
        if (scores[i] > scores[best_idx]) {
            best_idx = i;
        }
    }

    printf("\nHighest Similarity: Participant %d with \"%s\" (%.2f%%)\n",
           best_idx + 1, attempts[best_idx], scores[best_idx]);

    for (int i = 0; i < participants; i++) {
        free(attempts[i]);
        attempts[i] = NULL;
    }
    free(attempts);
    free(scores);
    free(pattern);
    attempts = NULL;
    scores = NULL;
    pattern = NULL;

    return 0;
}