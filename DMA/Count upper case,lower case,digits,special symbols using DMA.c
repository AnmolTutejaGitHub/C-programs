//Count upper case,lower case,digits and special symbols using DMA
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c1=0,c2=0,c3=0,c4=0,i;
    printf("\nEnter size of string:");
    scanf("%d",&n);
    char*p=(char*)malloc(n*sizeof(char));
    printf("\nEnter string:");
    fflush(stdin);
    gets(p);

    i=0;
    while(*(p+i)!='\0')
    {
        if(*(p+i)>=65 && *(p+i)<=90)
            c1++;
        else if (*(p+i)>=97 && *(p+i)<=132)
            c2++;
        else if(*(p+i)>=48 && *(p+i)<=57)
            c3++;
        else
            c4++;


    i++;
    }
    printf("\nUppercase=%d\nLowercase=%d\nDigits=%d\nSpecialSymbol=%d\n",c1,c2,c3,c4);
    free(p);

    return 0;
}
