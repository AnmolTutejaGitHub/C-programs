// Linear Search --- to check whether an element is present in an array or not
#include<stdio.h>

int main()
{
    int arraySize=10;
    int a[arraySize];

   // arraySize=sizeof(a)/sizeof(a[0]); //to know no. of elements in array //not working// saying know size of array entered by user using dynamic memory allocation

    int i,n;
    int found =0;

    printf("Enter elements of the array:\n");
    for(i=0;i<arraySize;i++)
        scanf("%d",&a[i]);

    printf("Enter number u want to search:\n");
    scanf("%d",&n);

    for(i=0; i<arraySize;i++)
    {
        if(a[i]==n)
        {
            found =1;
            break;
        }
    }
    if(found==1)
    printf("\nNumber is present in array at %d position",i+1); //position = i+1

    else
        printf("\nNumber is not present in the array");


    return 0;

}
