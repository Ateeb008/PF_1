#include <stdio.h>

#define MAX_SIZE 20

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int size = 8;
    int i, min, max, searchNum, foundIndex = -1;
    int insertVal, insertIdx, deleteIdx;

    // 1 & 2. Take 8 elements from the user
    printf("Enter 8 integer elements:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 3. Print the complete array
    printf("\nInitial Array: ");
    printArray(arr, size);

    // 4. Find largest and smallest element
    min = arr[0];
    max = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    printf("Smallest element: %d\n", min);
    printf("Largest element: %d\n", max);

    // 5. Search for a number entered by the user
    printf("\nEnter a number to search: ");
    scanf("%d", &searchNum);
    for (i = 0; i < size; i++) {
        if (arr[i] == searchNum) {
            foundIndex = i;
            break;
        }
    }
    if (foundIndex != -1) {
        printf("Number %d found at index %d\n", searchNum, foundIndex);
    } else {
        printf("Number %d not found in array.\n", searchNum);
    }

    // 6. Insert a new number at a specific index
    printf("\nEnter value to insert: ");
    scanf("%d", &insertVal);
    printf("Enter index to insert at (0 to %d): ", size);
    scanf("%d", &insertIdx);

    if (insertIdx < 0 || insertIdx > size) {
        printf("Invalid index for insertion!\n");
    } else {
        for (i = size; i > insertIdx; i--) {
            arr[i] = arr[i - 1];
        }
        arr[insertIdx] = insertVal;
        size++;
        printf("Array after insertion: ");
        printArray(arr, size);
    }

    // 7. Delete an element from a specific index
    printf("\nEnter index to delete (0 to %d): ", size - 1);
    scanf("%d", &deleteIdx);

    if (deleteIdx < 0 || deleteIdx >= size) {
        printf("Invalid index for deletion!\n");
    } else {
        for (i = deleteIdx; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    // 8. Print the final array
    printf("\nFinal Array: ");
    printArray(arr, size);

    return 0;
}