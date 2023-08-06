#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    int maxLength;
    printf("Enter the maximum length of the string: ");
    scanf("%d", &maxLength);

    char *inputString = (char *)malloc((maxLength + 1) * sizeof(char));
    if (inputString == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter a string: ");
    scanf("%s", inputString);

    // Reverse the string
    reverseString(inputString);

    printf("Reversed string: %s\n", inputString);

    // Free dynamically allocated memory
    free(inputString);

    return 0;
}
