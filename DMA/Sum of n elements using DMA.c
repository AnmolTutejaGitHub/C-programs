//Sum of n elements using DMA

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int*p,n,s;
    printf("\nEnter size of array: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));

    printf("\nEnter Elements ...... ");
    for(int i=0;i<n;i++)
        scanf("\n%d",(p+i));

    for(int i=0;i<n;i++)
        s=s+*(p+i);

printf("\nSum=%d",s);

free(p);

return 0;
}
