// C program to convert Decimal Number to Binary Number (for positive decimal nos. only)
#include<stdio.h>

int main()
{
    int n;
    printf("\nEnter a number:");
    scanf("%d",&n);

    int copyofn;
    copyofn = n;

    int rem;
    int i;
    int j;
    int a[100];      //Array to store remainder

    while(n)
    {
        rem = n%2;
        n=n/2;

        a[i] = rem;

        i++;
    }

     printf("\nBinary of %d is:",copyofn);

    for(j=i-1;j>=0;j--)
    {
        printf("%d", a[j]);
    }


}
