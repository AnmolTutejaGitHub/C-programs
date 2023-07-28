//Count vowels and consonants in string using pointers

#include<stdio.h>

int main()
{
    int count1=0;
    int count2=0;
    int size=10;

    char str[size];
    char*p;

    printf("\nEnter string");
    //fgets(str,sizeof(str),stdin);
    fgets(str,size,stdin); //takes sring upto size-1 and puts \0 in the end

    p=str;

    while(*p!='\0')
    {
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
        count1++;

        else
            count2++;

    p++;
    }

    printf("\nvowels=%d,consonants=%d",count1,count2);


        printf("\nstring taken is %s",str);

return 0;
}

/* You are correct, my apologies for the oversight. If you want to inform the user about the string length exceeding 49 characters but still read the entire input, you need to handle the input differently. One way to achieve this is by using dynamic memory allocation (e.g., `malloc`) to allocate memory for the input string.

Here's the modified code using dynamic memory allocation to handle strings of any length:

```c
#include <stdio.h>
#include <stdlib.h> // Include this header for using malloc
#include <string.h> // Include this header for using the strlen() function

int main()
{
    int count1 = 0;
    int count2 = 0;

    char* str; // Declare a pointer to char (for dynamic allocation)
    size_t size = 0; // Initialize the size of the string to 0
    ssize_t charactersRead; // Use ssize_t for storing the return value of getline

    printf("\nEnter string: ");
    charactersRead = getline(&str, &size, stdin);

    if (charactersRead == -1) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove the newline character (if present)
    if (str[charactersRead - 1] == '\n') {
        str[charactersRead - 1] = '\0';
        charactersRead--;
    }

    // Check if the length of the input string (excluding '\0') is greater than 49
    if (charactersRead > 49) {
        printf("String size exceeds the limit of 49 characters.\n");
    } else {
        char* p = str;

        while (*p != '\0') {
            if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' ||
                *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U') {
                count1++;
            } else {
                count2++;
            }

            p++;
        }

        printf("\nvowels = %d, consonants = %d\n", count1, count2);
        printf("string taken is %s\n", str);
    }

    // Free the dynamically allocated memory
    free(str);

    return 0;
}
```

In this modified code, we use `getline` instead of `fgets` to read the input, which allows us to dynamically allocate memory for the input string. The `getline` function will automatically resize the memory as needed to store the entire input string.

If the length of the input string (excluding the null terminator) is greater than 49 characters, we inform the user about the limitation. Otherwise, we proceed to count the vowels and consonants as before and display the input string.

Remember to free the dynamically allocated memory using `free` to avoid memory leaks.

With this approach, the program can handle input strings of any length, and it will properly inform the user if the string exceeds the limit of 49 characters.*/
