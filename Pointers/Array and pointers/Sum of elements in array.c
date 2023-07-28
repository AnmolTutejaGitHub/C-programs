//Function to Find sum of elements in an array using pointers

#include <stdio.h>

int arraySum(int* arr, int size) {
    int sum = 0;
    int* ptr = arr;
    for (int i = 0; i < size; i++) {
        sum += *ptr;
        ptr++;
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = arraySum(arr, size);
    printf("Sum of elements: %d\n", sum);
    return 0;
}

