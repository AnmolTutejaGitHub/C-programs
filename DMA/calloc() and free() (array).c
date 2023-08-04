/* How to use calloc() and free() function of DMA in C programming*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int*p,n;
    printf("\nEnter size of array: ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));

    printf("\nEnter Elements ...... ");
    for(int i=0;i<n;i++)
        scanf("\n%d",(p+i));

    printf("\nElements are ...... ");
    for(int i=0;i<n;i++)
        printf("\n%d",*(p+i));

    free(p);
    return 0;
}

