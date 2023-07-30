#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int a[n]; //or int candleHeights[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
   int max=0;
    int maxElement=0;
    
    
   maxElement=a[0]; //initialsing with first element
   for(int i=0;i<n;i++)
    {
       if(maxElement<a[i])
       maxElement=a[i];      
        
    //   if(a[i]==maxElement)
    //  max++;                //shifting outside loop into another loop as dry run with a[0] and dont keep it as largest
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==maxElement)
        max++;
    }
    printf("%d",max);
   
   
   
}
