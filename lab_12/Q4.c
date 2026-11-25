#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int categories;
    printf("Enter number of movie categories: ");
    if (scanf("%d", &categories) != 1 || categories <= 0) {
        printf("Invalid number of categories.\n");
        return 1;
    }

    int *ratings = (int *)malloc((size_t)categories * sizeof(int));
    if (ratings == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < categories; i++) {
        printf("Enter rating count for category %d: ", i);
        scanf("%d", &ratings[i]);
    }

    int total = 0;
    int max_idx = 0;
    for (int i = 0; i < categories; i++) {
        total += ratings[i];
        if (ratings[i] > ratings[max_idx]) {
            max_idx = i;
        }
    }
    double avg = (double)total / categories;

    printf("\n--- Rating Summary ---\n");
    printf("Total ratings across all categories: %d\n", total);
    printf("Average ratings per category: %.2f\n", avg);
    printf("Highest rating count: Category %d (%d ratings)\n", max_idx, ratings[max_idx]);

    int selected;
    printf("\nEnter category index (0 to %d) to update rating count (-1 to skip): ", categories - 1);
    scanf("%d", &selected);
    if (selected >= 0 && selected < categories) {
        printf("Enter new rating count for category %d: ", selected);
        scanf("%d", &ratings[selected]);

        total = 0;
        max_idx = 0;
        for (int i = 0; i < categories; i++) {
            total += ratings[i];
            if (ratings[i] > ratings[max_idx]) {
                max_idx = i;
            }
        }
        avg = (double)total / categories;

        printf("\n--- Updated Rating Summary ---\n");
        printf("Total ratings across all categories: %d\n", total);
        printf("Average ratings per category: %.2f\n", avg);
        printf("Highest rating count: Category %d (%d ratings)\n", max_idx, ratings[max_idx]);
    }

    free(ratings);
    ratings = NULL;
    return 0;
}