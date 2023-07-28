//Count length of string using pointer in C
#include<stdio.h>

int main()
{
    char str[10]="India";
    char*p;

    int count=0;
    p=str;

    while(*p!='\0')
    {
        count ++;
        p++;
    }

    printf("\nLength=%d",count);

return 0;
}
