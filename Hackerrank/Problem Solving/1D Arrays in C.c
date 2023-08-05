#include <stdio.h>
#include <stdlib.h>

int main() {
   
   int n;
   scanf("%d",&n);
   
   int*ptr=(int*)malloc(n*sizeof(int));
   for(int i=0;i<n;i++)
   scanf("%d",ptr+i);
   
   int sum=0;
   
   for(int i=0;i<n;i++)
   {
       sum=sum+ *(ptr+i);
   }
   
   printf("%d",sum);
    return 0;
}
