#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int k;
    scanf("%d",&k);
    
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    int b;
    scanf("%d",&b);
    
    int AnnaToPay=0;
    
    int totalCost=0;
    
    for(int i=0;i<n;i++)
    {
       totalCost = totalCost+arr[i] ;
    }
    
        
        AnnaToPay= (totalCost-arr[k])/2;
        
    if(b-AnnaToPay==0)
    printf("Bon Appetit");
    
    else
    printf("%d",b-AnnaToPay);
}
