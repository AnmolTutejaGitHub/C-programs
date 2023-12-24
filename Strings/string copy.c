//In C, you cannot use the assignment operator (=) to assign the contents of one character array to another directly. The assignment operator in C works with individual elements or values, not entire arrays. If you try to do str1 = str2, it will result in a compilation error.

//If you want to copy the contents of one array to another, you can use the strcpy function from the <string.h> library:
#include <stdio.h>
#include <string.h>

int main() {
    // Define two strings
    char str1[50] = "Hello, ";
    char str2[] = "world!";

    // Copy the contents of str2 to str1
    strcpy(str1, str2);

    // Print the updated string
    printf("Updated string: %s\n", str1);

    return 0;
}

// In this example, strcpy(str1, str2) copies the contents of str2 into str1. However, it's important to note that you should ensure that the destination array (str1 in this case) has enough space to accommodate the contents of the source array (str2).

//Using strcpy without verifying the size of the destination array can lead to buffer overflow if the source string is longer than the destination string, potentially causing undefined behavior in your program. If you know the maximum size of the strings involved, consider using safer alternatives like strncpy.
