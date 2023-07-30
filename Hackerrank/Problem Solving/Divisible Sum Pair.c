#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int k;
    scanf("%d",&k);
    
    int count=0;
    
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<j;i++)
        {
           if((a[j]+a[i])%k==0)
           count++;  
        }
    }
    printf("%d",count);
  
}
