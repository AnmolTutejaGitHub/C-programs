// *****
// ****
// ***
// **
// *

#include<stdio.h>
#include<string.h>
int main(){
  int n = 5;
  int i=0;
  int j=0;
  while(i<n){
      j=0;
      while(j<n-i){
          printf("*");
          j++;
      }
      printf("\n");
    i++;
  }
}
