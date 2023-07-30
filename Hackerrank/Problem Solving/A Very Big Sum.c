#include<stdio.h>

int main()
{
    int n;
   long long int sum=0;
    scanf("%d",&n);
    
    long long array[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&array[i]);
        sum = sum + array[i];
    }
    
    printf("%lld",sum);
   return 0; 
}
