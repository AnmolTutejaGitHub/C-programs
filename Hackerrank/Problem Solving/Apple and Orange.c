#include<stdio.h>

int main()
{
   int s,t;
   scanf("%d%d",&s,&t);
   
   int a,b;
   scanf("%d%d",&a,&b);
   
   int m,n;
   scanf("%d%d",&m,&n);
   
   int fallfrom_a[m];
   for(int i=0;i<m;i++)
   scanf("%d",&fallfrom_a[i]);
   
   int fallfrom_b[n];
   for(int i=0;i<n;i++)
   scanf("%d",&fallfrom_b[i]);
   
   int arr1[m];
   int arr2[n];
   int count1=0;
   int count2=0;
 
   for(int i=0;i<m;i++)
   {
       arr1[i]=a+fallfrom_a[i];
   }

  for(int i=0;i<n;i++)
   {
       arr2[i]=b+fallfrom_b[i];
   }
    for(int i=0;i<m;i++)
    {
      if(arr1[i]>=s && arr1[i]<=t)
      count1++;
    }
    
    for(int i=0;i<n;i++)
    {
      if(arr2[i]>=s && arr2[i]<=t)
      count2++;
    }
    
    printf("%d\n%d",count1,count2);
}
