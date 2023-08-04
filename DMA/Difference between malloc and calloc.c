/* Difference between malloc() and calloc() functions of DMA in C Programming*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,n;
    printf("\nEnter size of array: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));

    printf("\nElements are ...... ");
    for(int i=0;i<n;i++)
        printf("\n%d",*(p+i));   //Display garbage values

    free(p);
    p=NULL;
    p=(int*)calloc(n,sizeof(int));

    printf("\nElements are ...... ");
    for(int i=0;i<n;i++)
        printf("\n%d",*(p+i));    //initialised with 0

    free(p);
    return 0;
}
