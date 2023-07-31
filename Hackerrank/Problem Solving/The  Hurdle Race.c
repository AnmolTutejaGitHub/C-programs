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
    
    int largest = arr[0]; //Finding largest element of array
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        largest = arr[i];
    }
    
    if(k<largest)
    printf("%d",largest-k);
    
    if(k>=largest)
    printf("0");
    
}
