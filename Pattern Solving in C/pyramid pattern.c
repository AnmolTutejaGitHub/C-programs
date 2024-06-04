// pyramid patterrn 
#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);

    for(int i=0;i<n;i++){ // for inverted pyramid for(int i=n-1;i>=0;i--) else everything same
       for(int j=0;j<2*n-1;j++){
           if(j>n-(i-1) && j<n+(i-1)) printf("*");
           else printf(" ");
       }
       printf("\n");
    }
}
