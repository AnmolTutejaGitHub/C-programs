// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int m=2;
   int n=3;
   int p=2;
   printf("Dimensions");
//   scanf("%d",&m);
//   scanf("%d",&n);
//   scanf("%d",&p);
   
   int A[m][n];
   int B[n][p];
   
   int res[m][p];
   
   // input 
   printf("Enter matrix 1:");
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           scanf("%d",&A[i][j]);
       }
   }
   
    printf("Enter matrix 2:");
   for(int i=0;i<n;i++){
       for(int j=0;j<p;j++){
           scanf("%d",&B[i][j]);
       }
   }
   
   // initialise res with zero
  for(int i=0;i<m;i++){
       for(int j=0;j<p;j++){
           res[i][j]=0;
       }
   }
   
   // multiplication
   for(int i=0;i<m;i++){
       for(int j=0;j<p;j++){
           for(int k=0;k<n;k++){
               res[i][j]+=A[i][k]*B[k][j];
           }
       }
   }


  // display
   for(int i=0;i<m;i++){
       for(int j=0;j<p;j++){
           printf("%d",res[i][j]);
       }
   }
   return 0;
}
