//String concatenation using pointers
#include <stdio.h>

int main()
{   int size=100;
    char s1[size],s2[size/2],*p1,*p2;
    printf("\nEnter First string:");
    //fgets(s1,size/2,stdin);
    fgets(s1,size,stdin);
    p1=s1;
    printf("\nEnter second string:");
    fgets(s2,size/2,stdin);
    p2=s2;
   // printf("input stings:%s\n%s",s1,s2);
    while(*p1!='\0')
    {
        p1++;
    }

    while(*p2!='\0')
    {
        *p1=*p2;
        p1++;
        p2++;
    }
    *p1='\0';

    printf("\nConcatenated string:%s",s1);

    return 0;
}

/* prob with this code concatenated string coming with newline like this format s1/ns2
solution----
Apologies for the oversight in my previous response.
The newline in the concatenated string is occurring
because we didn't properly handle the newline character from the first input string.
To fix this issue, we need to remove the newline character from the end of the first
input string before concatenating it with the second string. We can achieve this by
checking if the last character of the first string is a newline (`'\n'`) and replacing
it with the null terminator (`'\0'`) to properly terminate the string.

Here's the updated code with the necessary fix:

```c
#include <stdio.h>

int main()
{
    int size = 10;
    char s1[size], s2[size / 2], *p1, *p2;

    printf("\nEnter First string: ");
    fgets(s1, size, stdin);

    // Remove the newline character from the end of the first string (if present)
    if (s1[strlen(s1) - 1] == '\n')
    {
        s1[strlen(s1) - 1] = '\0';
    }

    p1 = s1;

    printf("\nEnter second string: ");
    fgets(s2, size / 2, stdin);
    p2 = s2;

    printf("Input strings: %s%s", s1, s2);

    while (*p1 != '\0')
    {
        p1++;
    }

    *p1 = ' '; // Place a space character instead of '\0' to separate the two strings

    while (*p1 != '\0')
    {
        p1++;
    }

    while (*p2 != '\0')
    {
        *p1 = *p2;
        p1++;
        p2++;
    }
    *p1 = '\0'; // Terminate the concatenated string

    printf("\nConcatenated string: %s", s1);

    return 0;
}
```

Now, the code should correctly concatenate
the two input strings and display the concatenated result without
any extra newline characters in the middle.
The newline character from the first input string is properly removed before concatenation.

*/
