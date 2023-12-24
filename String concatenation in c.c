#include <stdio.h>
#include <string.h>

int main() {
    // Define two strings
    char str1[] = "Hello, ";
    char str2[] = "world!";

    // Create an empty string to store the result
    char result[50] = "";

    // Concatenate str1 to the result
    strcat(result, str1);

    // Concatenate str2 to the result
    strcat(result, str2);

    // Print the concatenated string
    printf("Concatenated string: %s\n", result);

    return 0;
}
