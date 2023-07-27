//goto statements can be confusing while reading codes ;so avoid using goto
#include <stdio.h>
#include <stdlib.h>

int main()
{
    label:

        printf("we are inside label");
        goto end;
        printf("Hello world!\n");
        goto label ;
        end:
            printf("\nWe are at end.XD");


    return 0;
}
