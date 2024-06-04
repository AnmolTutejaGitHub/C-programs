// A
// BB
// CCC
// DDDD
// EEEEE

#include <stdio.h>
int main()
{   
   int n = 5;

   int i=0;
   int j=0;

   while(i<n){
       j=0;
       while(j<=i){
           printf("%c",i+'A');
           j++;
       }
       i++;
       printf("\n");
   }
}
