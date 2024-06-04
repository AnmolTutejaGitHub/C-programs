// *

// **

// ***

// ****

// *****

// ****

// ***

// **

// *

#include <stdio.h>
int main()
{
   int n = 5;
   int i=0;
   int count = 0;
   int j=0;
   while(i<2*n-1){
       j=0;
       while(j<n){
           if(i<n && j<i+1) printf("*");
           if(i>=n && j<2*n-i-1) {
               printf("*");
               count+=1;
           }
           j++;
       }
       printf("\n");
       i++;
   }
}
