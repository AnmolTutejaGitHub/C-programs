//Copy a string into another string using DMA
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,i;
    char*p1;
    char*p2;
    printf("\nEnter size of first string:");
    scanf("%d",&n1);

    p1=(char*)malloc(n1*sizeof(char));

    printf("\nEnter size of second string=");
    scanf("%d",&n2);
    p2=(char*)malloc(n2*sizeof(char));

    printf("\nEnter String:");
    fflush(stdin);
    gets(p1);
    i=0;
    while(*(p1+i)!='\0')
    {
        *(p2+i)= *(p1+i);
        i++;
    }
    *(p2+i)='\0';

    fflush(stdin);
    printf("\nCopied String=%s",p2);
    free(p1);
    free(p2);

    return 0;
}
