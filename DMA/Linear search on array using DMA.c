//Linear search on array using DMA
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int*p,n,i,item,f=0;

    printf("\nEnter Size:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("\nEnter Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("\nEnter number you want to search:");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(*(p+i)==item)
        {
            f=1;
            break;
        }
    }
    if(f==1)
     printf("\nNumber is available XD");
    else
        printf("\n FUCK \n Number isn't available....");

    free(p);

    return 0;
}
