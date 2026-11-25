#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERNAME_LEN 256

int containsDigit(char *str) {
    if (str == NULL) {
        return 0;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            return 1;
        }
    }
    return 0;
}

int main(void) {
    int n;
    printf("Enter number of usernames (N): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid count.\n");
        return 1;
    }
    getchar(); // consume trailing newline

    char **usernames = (char **)malloc((size_t)n * sizeof(char *));
    if (usernames == NULL) {
        printf("Memory allocation failed for username pointers.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        char buffer[MAX_USERNAME_LEN];
        printf("Enter username %d: ", i + 1);
        if (scanf("%255s", buffer) != 1) {
            buffer[0] = '\0';
        }

        usernames[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
        if (usernames[i] == NULL) {
            printf("Memory allocation failed for username %d.\n", i + 1);
            for (int j = 0; j < i; j++) {
                free(usernames[j]);
            }
            free(usernames);
            return 1;
        }
        strcpy(usernames[i], buffer);
    }

    // Remove usernames containing digits by freeing them and marking NULL
    for (int i = 0; i < n; i++) {
        if (containsDigit(usernames[i])) {
            free(usernames[i]);
            usernames[i] = NULL;
        }
    }

    printf("\n--- Valid Usernames (No Digits) ---\n");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (usernames[i] != NULL) {
            printf("%s\n", usernames[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("No usernames without digits found.\n");
    }

    for (int i = 0; i < n; i++) {
        free(usernames[i]);
        usernames[i] = NULL;
    }
    free(usernames);
    usernames = NULL;
    return 0;
}