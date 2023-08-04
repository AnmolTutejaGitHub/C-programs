//Find out maximum and minimum elements from array using DMA

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int*p,n,i,max=-32678,min=32767;

    printf("\nEnter Size");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);

        if(*(p+i)>max)
            max=*(p+i);

        if(*(p+i)<min)
            min=*(p+i);
    }

    printf("\nMaximum=%d\nMinimum=%d",max,min);

    free(p);
    return 0;
}
