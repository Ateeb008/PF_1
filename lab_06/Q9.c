#include <stdio.h>
#include <ctype.h>

int main() {
    char word[100];
    int length = 0;
    int isPalindrome = 1;
    int vowels = 0, consonants = 0;
    int i;

    printf("Enter a word: ");
    scanf("%s", word);

    // 1. Print the original word
    printf("\nOriginal word: %s\n", word);

    // 2. Find length without strlen()
    while (word[length] != '\0') {
        length++;
    }
    printf("Length of the word: %d\n", length);

    // 3. Print reversed word
    printf("Reversed word: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", word[i]);
    }
    printf("\n");

    // 4. Check if word is a palindrome
    for (i = 0; i < length / 2; i++) {
        if (tolower(word[i]) != tolower(word[length - 1 - i])) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("Palindrome status: Yes\n");
    } else {
        printf("Palindrome status: No\n");
    }

    // 5 & 6. Count vowels and consonants
    for (i = 0; i < length; i++) {
        char ch = tolower(word[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}