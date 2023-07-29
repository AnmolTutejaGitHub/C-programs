//Print reverse of a string by passing string into function using pointer
#include <stdio.h>

void reverse(char*);  //Function declaration

int main()
{
    char str[100];
    printf("\nEnter string:");
    gets(str);

    reverse(str);  //As str is pointer note str[] isn't

    return 0;
}

void reverse(char*p)
{
    int i,c=0;
    for(i=0;*(p+i)!=0;i++)
    {
        c++;
    }
    printf("\n string reverse");

    for(i=c-1;i>0;i--)
        printf("%c",*(p+i));
}
