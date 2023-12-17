// call by value vs call by reference 


// "Call by value" and "call by reference" are terms used to describe how parameters are passed to functions in programming languages. These terms refer to the way in which the actual arguments (the values or references) are passed to a function's parameters.

// Call by Value:

// In call by value, the value of the actual argument is passed to the function parameter.
// The function receives a copy of the value, and any modifications made to the parameter inside the function do not affect the original value outside the function.
// This method is used in languages like C, C++, and Java for primitive data types (e.g., int, float).
// Example in C++:

void square(int x) {
    x = x * x;     //u need to return 
}

int main() {
    int num = 5;
    square(num);
    // 'num' remains 5, as 'num' was passed by value
}
// Call by Reference:

// In call by reference, the reference (memory address) of the actual argument is passed to the function parameter.
// The function works directly with the memory location of the original variable, and any changes made to the parameter inside the function affect the original variable.
// This method is used in languages like C++ (using references), Python (using references), and some others.
// Example in C++:


void square(int &x) {
    x = x * x;
}

int main() {
    int num = 5;
    square(num);
    // 'num' is now 25, as 'num' was passed by reference
}
// It's important to note that the terms "call by value" and "call by reference" are sometimes used differently in different contexts. In some languages, the term "call by reference" might be used to refer to passing references to objects, even if the original reference is not modified inside the function.

// If you want to modify the original value of a variable inside a function and have those changes reflected outside the function, you can use pointers. Pointers allow you to pass the address of a variable, and the function can then manipulate the value stored at that address. This is similar to call by reference, but it's often more explicitly controlled using pointers.


// Certainly! Here's the same example using C:

#include <stdio.h>

void square(int *x) {
    // Dereference the pointer and modify the value at the memory address
    *x = (*x) * (*x);
}

int main() {
    int num = 5;

    // Pass the address of 'num' to the function
    square(&num);

    // 'num' is now 25, as it was modified through the pointer
    printf("Modified value: %d\n", num);

    return 0;
}
// In C, the syntax and concepts are similar to C++. The key points to note are:

// The function parameter is declared as a pointer using int *x.
// The &num syntax is used to pass the address of the variable num to the function.
// Inside the function, *x is used to dereference the pointer and modify the value at the memory address it points to.
// When you run this program, it will output "Modified value: 25".
