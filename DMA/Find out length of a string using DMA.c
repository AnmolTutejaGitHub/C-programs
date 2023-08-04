//Find out length of a string using DMA
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c=0;
    char*p;
    printf("\nEnter size of string:");
    scanf("%d",&n);
    p=(char*)malloc(n*sizeof(char));
    printf("\nEnter string:");
    fflush(stdin);
    gets(p);
    int i=0;
    while(*(p+i)!='\0')
    {
        c++;
        i++;
    }
    printf("\nLength=%d",c);
    free(p);
    return 0;
}
