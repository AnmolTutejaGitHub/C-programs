#include <stdio.h>

// Define the inner structure
struct Inner {
    int innerValue;
};

// Define the outer structure with a nested structure inside
struct Outer {
    int outerValue;
    struct Inner innerStruct; // Nested structure
};

int main() {
    // Declare and initialize a structure with a nested structure
    struct Outer outerStruct = {
        10,
        {20}
    };

    // Access and print values using nested structure notation
    printf("Outer Value: %d\n", outerStruct.outerValue);
    printf("Inner Value: %d\n", outerStruct.innerStruct.innerValue);

    return 0;
}

