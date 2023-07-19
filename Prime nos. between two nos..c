/* Write a function to print all prime numbers from a to b,
where a and b are taken as arguments (inclusive of a and b)*/
#include<stdio.h>
int isPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
            if(n%i==0)
            return 0;
    }

    return 1; //error return 1 must be outside for loop ,
    //Otherwise, the function will return 1 after checking just
    //the first iteration of the loop, which is incorrect.
    //return 0 will end isPrime() so no point return 1; will update return 1;
}


void printPrime(int a,int b)
{
    int x=0;
    for (x=a;x<=b;x++)
       {
        if(isPrime(x))
         printf("%d ",x);
       }
}


int main()
{
    int a;
    int b;
    scanf("%d%d",&a,&b);
    printPrime(a,b);
    getch();

    return 0;
}
