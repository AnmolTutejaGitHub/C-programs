//Smallest and Largest element in an array
#include <stdio.h>

int main() {
    int size, i;
    int arr[100]; // Assuming the array can hold up to 100 integers

    printf("Enter the number of elements in the array (up to 100): ");
    scanf("%d", &size);

    if (size <= 0 || size > 100) {
        printf("Error: Please enter a positive number up to 100.\n");
        return 1;
    }

    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0]; //initialising smallest and largest element with first element
    int smallest = arr[0];

    for (i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}
