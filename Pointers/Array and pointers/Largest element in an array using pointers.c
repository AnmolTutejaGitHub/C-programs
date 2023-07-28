//Find largest element in an array using pointers

#include <stdio.h>

int findLargest(const int arr[], int size) {
    const int *ptr = arr;
    const int *end = arr + size;
    int largest = *arr;

    while (ptr < end) {
        if (*ptr > largest) {
            largest = *ptr;
        }
        ptr++;
    }

    return largest;
}

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = findLargest(arr, size);
    printf("Largest element: %d\n", largest);
    return 0;
}
