//Sum of two 1D array using DMA
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int*p1,*p2,n1,n2,i;
    printf("\nEnter size of first array:");
    scanf("%d",&n1);
    p1=(int*)malloc(n1*sizeof(int));

    printf("\nEnter elements of first array:");
    for(i=0;i<n1;i++)
      scanf("%d",p1+i);

      printf("\nEnter size of second array:");
    scanf("%d",&n2);
    p2=(int*)malloc(n2*sizeof(int));

    printf("\nEnter elements of second array:");
    for(i=0;i<n2;i++)
      scanf("%d",p2+i);

   printf("\nSum.......");
   if(n1==n2)
   {
       for(i=0;i<n1;i++)
       {
           printf("\n%d",(*p1+i)+(*p2+i));
       }
   }
       else
            printf("\nSize of arrays isn't matching\n   ...... WTF .......   Have you done");

   free(p1);
   free(p2);
    return 0;
}
