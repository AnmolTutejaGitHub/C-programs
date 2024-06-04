// ABCDE
// ABCD
// ABC
// AB
// A

#include <stdio.h>
int main()
{   
   int n = 5;

   int i=0;
   int j=0;

   while(i<n){
       j=0;
       while(j<n-i){
           printf("%c",'A'+j);
           j++;
       }
       i++;
       printf("\n");
   }
}
