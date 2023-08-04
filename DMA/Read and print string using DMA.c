//How to read and print string using DMA
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char*p;

    printf("\nEnter Size of string:");
    scanf("%d",&n);

    p=(char*)malloc(n*sizeof(char));
    printf("\nEnter a string:");
    fflush(stdin);
    gets(p);
    printf("\nYou Entered = %s",p);
    free(p);

    return 0;
}
/*I entered size 4 and anmol as string and it is displaying whole string how ?
 GOT IT;

However, when you used `gets(p)` to read input, it's important to note that the `gets()` function doesn't know
about the size of the allocated memory. It reads characters from input until it encounters a newline character or
the end of file, potentially causing a buffer overflow if the input string is longer than the allocated memory.
This is why you are able to enter a string like "anmol" even though you allocated memory for only 4 characters.
The `gets()` function reads beyond the allocated memory, causing undefined behavior.
To avoid this issue, you should use the updated code I provided in my previous response.
It uses `fgets()` to read input and specifies the maximum number of characters to read,
ensuring that no buffer overflow occurs.
*/
