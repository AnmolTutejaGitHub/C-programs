/* write a function to find number of possible combinations
can be made out of n items, selected r at a time*/
#include<stdio.h>

int fact(int n)
{
    int f=1;
    while(n)
    {
        f=f*n;
        n--;
    }
    return f;
}

int combi(int n , int r)
{
    return fact(n)/fact(n-r)/fact(r) ;
}

int main()
{
    int a,b;

    printf("Possible combination of no. of n items , selected r at a time.  Enter n and r:");
    scanf("%d%d",&a,&b);
    printf("No. of combinations:%d",combi(a,b));
    getch();

    return 0;
}
