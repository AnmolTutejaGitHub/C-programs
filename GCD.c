//Calculating GCD
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int f=1;
    int i=1;

    int min =(a<b)?a:b ;

    //logic
    for(i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
            f=i;
    }

    printf("%d",f);
    return 0;
}
