#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Enter number of book categories: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of categories.\n");
        return 1;
    }

    int *stock = (int *)malloc((size_t)n * sizeof(int));
    if (stock == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter stock for category %d: ", i);
        scanf("%d", &stock[i]);
    }

    int total = 0;
    int min_idx = 0;
    for (int i = 0; i < n; i++) {
        total += stock[i];
        if (stock[i] < stock[min_idx]) {
            min_idx = i;
        }
    }
    double average = (double)total / n;

    printf("\n--- Stock Summary ---\n");
    printf("Total stock: %d\n", total);
    printf("Average stock per category: %.2f\n", average);
    printf("Category index with lowest stock: %d (Stock: %d)\n", min_idx, stock[min_idx]);

    int update_idx, new_stock;
    printf("\nEnter category index (0 to %d) to update stock (-1 to skip): ", n - 1);
    scanf("%d", &update_idx);
    if (update_idx >= 0 && update_idx < n) {
        printf("Enter new stock for category %d: ", update_idx);
        scanf("%d", &new_stock);
        stock[update_idx] = new_stock;

        total = 0;
        min_idx = 0;
        for (int i = 0; i < n; i++) {
            total += stock[i];
            if (stock[i] < stock[min_idx]) {
                min_idx = i;
            }
        }
        average = (double)total / n;

        printf("\n--- Updated Stock Summary ---\n");
        printf("Total stock: %d\n", total);
        printf("Average stock per category: %.2f\n", average);
        printf("Category index with lowest stock: %d (Stock: %d)\n", min_idx, stock[min_idx]);
    }

    free(stock);
    stock = NULL;
    return 0;
}