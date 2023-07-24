#include <stdio.h>

int main() {
    int x = 10;
    const int* ptr1 = &x; // Pointer to constant integer: Cannot change the value pointed by ptr1 using dereference oprator, but can change x directly,  *ptr1 = 139; is wrong we can't do this , but can do x=139;(directly)
    int const* ptr2 = &x; // Also a pointer to constant integer

    int y = 20;
    int* const ptr3 = &y; // Constant pointer to integer: Cannot change where ptr3 points to
    const int* const ptr4 = &x; // Constant pointer to constant integer: Cannot change both pointer and value

    printf("Value of x: %d\n", x);
    printf("Value pointed by ptr1: %d\n", *ptr1);
    printf("Value pointed by ptr2: %d\n", *ptr2);
    printf("Value pointed by ptr3: %d\n", *ptr3);
    printf("Value pointed by ptr4: %d\n", *ptr4);

    x = 100; // Modifying the value of 'x' directly (allowed)
    printf("Modified value of x: %d\n", x);

    // Uncomment the lines below to see compilation errors due to attempting to modify constant pointers/values.
    /*
    *ptr1 = 200; // Error: Attempting to modify the value pointed by a const pointer
    *ptr2 = 300; // Error: Attempting to modify the value pointed by a const pointer
    ptr3 = &x;   // Error: Attempting to modify a const pointer
    *ptr4 = 400; // Error: Attempting to modify the value pointed by a const pointer to const
    */

    return 0;
}
