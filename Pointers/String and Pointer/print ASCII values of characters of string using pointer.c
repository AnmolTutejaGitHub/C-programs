//Print ASCII value of characters of string using pointers
#include<stdio.h>

int main()
{
    char str[100],*p;
    printf("\nEnter string:");
    gets(str);

    p=str;

    while(*p!='\0')
    {
        printf("\n%c=%d",*p,*p);
        p++;
    }
    return 0;
}
