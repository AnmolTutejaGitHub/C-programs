#include<stdio.h>

int main()
{
    int arr[5];
    long long int maxsum = 0;
    long long int minsum = 0;
    long long int sum = 0;
    int largestElement;
    int smallestElement;
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    largestElement = arr[0];
    smallestElement = arr[0];
    
    for (int i = 0; i < 5; i++) 
    {
        if (largestElement < arr[i])
            largestElement = arr[i];
        
        if (smallestElement > arr[i])
            smallestElement = arr[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
        //can't do with minsum and max sum 
        //directly here because -smallestElement/largestElement
        // happens here every time this loop will be run
        
    }
    
    maxsum = sum - smallestElement;
    minsum = sum - largestElement;
    
    printf("%lld %lld", minsum, maxsum);
    
    return 0;
}


