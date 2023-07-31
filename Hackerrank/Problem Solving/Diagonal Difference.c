#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int d1=0;  //sum of diagonal d1
    int d2=0;  //sum of diagonal d2
    int diff;
    
    int a[n][n];
    
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<n;j++)           //input 2D string
           scanf("%d",&a[i][j]);
    }
    
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
           {
               if(i==j)
               d1=d1+ a[i][j];  //can be done with single i loop just put j=i here as this is what we want also d2 can be  calculated without j as terms of i
               if(j==n-1-i)
               d2=d2+ a[i][j];
               
           }
      }
      
      diff=abs(d1 - d2);
      printf("%d",diff);
}
