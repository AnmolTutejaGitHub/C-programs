/*Sum of even and odd elements through DMA */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int*p,n,i,s1=0,s2=0;
    printf("\nEnter size:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("\nEnter Elements ......");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        if(*(p+i)%2==0)
            s1=s1+*(p+i);
        else
            s2=s2+*(p+i);
    }
    printf("\nEven=%d,odd=%d",s1,s2);

    free(p);
    return 0;
}
