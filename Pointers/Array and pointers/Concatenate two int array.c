//concatenate two int array
#include <stdio.h>

void concatenateArrays(int arr1[], int size1, int arr2[], int size2, int result[], int *resultSize) {
    int i;

    // Copy elements from the first array
    for (i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }

    // Copy elements from the second array
    for (i = 0; i < size2; i++) {
        result[size1 + i] = arr2[i];
    }

    // Update the size of the resulting array
    *resultSize = size1 + size2;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {5, 6, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int result[100]; // Assuming the concatenated array won't exceed 100 elements
    int resultSize = 0;

    concatenateArrays(arr1, size1, arr2, size2, result, &resultSize);

    printf("Concatenated Array: ");
    for (int i = 0; i < resultSize; i++) {
        printf("%d ", result[i]);
    }

    printf("\n");

    return 0;
}

