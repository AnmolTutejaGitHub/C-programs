#include <stdio.h>
#include <math.h>
#include <string.h>
// matrix multiplication 
void scanf_matrix(int a, int b, int matrix[a][b]);
void printf_matrix(int a, int b, int matrix[a][b]);

int main(){
   int a;
   int b;
   int c;
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);

   int matrix1[a][b]; // a * b matrix
   int matrix2[b][c]; // b * c matrix
   int res[a][c];

   scanf_matrix(a,b,matrix1);
   scanf_matrix(b,c,matrix2);

   // matrix multiplication
   for(int i=0;i<a;i++){
       for(int j=0;j<c;j++){
           res[i][j]=0;
           for(int k=0;k<b;k++){
               res[i][j] += matrix1[i][k]*matrix2[k][j];
           }
       }
   }


   printf_matrix(a,c,res);


   return 0;
}

// input
void scanf_matrix(int a, int b,int matrix[a][b]){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
}

// print matrix 
void printf_matrix(int a,int b,int matrix[a][b]){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d",matrix[i][j]);
        }
    }
}
