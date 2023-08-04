/* How to use realloc function of DMA in C programming */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,n,newsize;

    printf("\nEnter size of array: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));

    printf("\nElements are ...... ");
    for(int i=0;i<n;i++)
        printf("\n%d",*(p+i));   //Display garbage values


    printf("\nEnter new size of array: ");
    scanf("%d",&newsize);
    p=(int*)realloc(p,newsize);

    printf("\nElements are ...... ");
    for(int i=0;i<newsize;i++)
        printf("\n%d",*(p+i));


    free(p);
    return 0;
}


