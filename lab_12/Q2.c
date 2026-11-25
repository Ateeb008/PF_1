#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 1024

int main(void) {
    int n;
    printf("Enter number of feedback entries: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of entries.\n");
        return 1;
    }
    getchar(); // consume trailing newline

    char **feedback = NULL;
    int current_cap = 0;

    for (int i = 0; i < n; i++) {
        if (i >= current_cap) {
            int new_cap = (current_cap == 0) ? 2 : current_cap * 2;
            if (new_cap < n) {
                new_cap = n;
            }
            char **temp = (char **)realloc(feedback, (size_t)new_cap * sizeof(char *));
            if (temp == NULL) {
                printf("Failed to reallocate feedback pointer array.\n");
                for (int j = 0; j < i; j++) {
                    free(feedback[j]);
                }
                free(feedback);
                return 1;
            }
            feedback = temp;
            current_cap = new_cap;
        }

        char buffer[MAX_LEN];
        printf("Enter feedback %d: ", i + 1);
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            buffer[0] = '\0';
        }
        buffer[strcspn(buffer, "\n")] = '\0';

        size_t len = strlen(buffer);
        feedback[i] = (char *)malloc((len + 1) * sizeof(char));
        if (feedback[i] == NULL) {
            printf("Failed to allocate memory for feedback %d.\n", i + 1);
            for (int j = 0; j < i; j++) {
                free(feedback[j]);
            }
            free(feedback);
            return 1;
        }
        strcpy(feedback[i], buffer);
    }

    int total_chars = 0;
    char *longest = feedback[0];
    size_t max_len = strlen(feedback[0]);

    printf("\n--- All Feedback Entries ---\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, feedback[i]);

        // Pointer traversal to count characters in each entry
        int count = 0;
        char *p = feedback[i];
        while (*p != '\0') {
            count++;
            p++;
        }
        total_chars += count;

        if ((size_t)count > max_len) {
            max_len = (size_t)count;
            longest = feedback[i];
        }
    }

    printf("\nTotal characters across all entries: %d\n", total_chars);
    printf("Longest feedback entry (%zu chars): %s\n", max_len, longest);

    for (int i = 0; i < n; i++) {
        free(feedback[i]);
        feedback[i] = NULL;
    }
    free(feedback);
    feedback = NULL;
    return 0;
}