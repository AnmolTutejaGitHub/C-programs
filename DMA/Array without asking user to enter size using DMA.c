/*
 * This program demonstrates how to create an array without explicitly asking
 * the size from the user. It takes advantage of the fact that the user will be
 * entering elements continuously until they input a specific exit command.
 * The program dynamically allocates memory for the array as needed using `realloc()`.
 * The user can keep entering elements until they type `-1`, at which point the input
 * process stops, and the program prints the array elements.
 * Don't forget to free the dynamically allocated memory after using the array.
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr = NULL;
    int size = 0;
    int input;

    printf("Enter array elements (enter -1 to stop):\n");

    while (1) {
        scanf("%d", &input);
        if (input == -1) {
            break;
        }

        size++;
        arr = (int*)realloc(arr, size * sizeof(int));
        arr[size - 1] = input;
    }

    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Don't forget to free the dynamically allocated memory
    free(arr);

    return 0;
}

