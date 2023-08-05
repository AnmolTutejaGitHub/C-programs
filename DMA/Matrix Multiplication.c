#include <stdio.h>
#include <stdlib.h>

void matrixMultiplication(int **A, int **B, int **C, int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int m, n, p;

    printf("Enter the number of rows for matrix A: ");
    scanf("%d", &m);
    printf("Enter the number of columns for matrix A and rows for matrix B: ");
    scanf("%d", &n);
    printf("Enter the number of columns for matrix B: ");
    scanf("%d", &p);

    int **A = (int **)malloc(m * sizeof(int *));
    int **B = (int **)malloc(n * sizeof(int *));
    int **C = (int **)malloc(m * sizeof(int *));
    if (A == NULL || B == NULL || C == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Allocate memory for each row of matrix A, B, and C
    for (int i = 0; i < m; i++) {
        A[i] = (int *)malloc(n * sizeof(int));
        C[i] = (int *)malloc(p * sizeof(int));
        if (A[i] == NULL || C[i] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
    }

    for (int i = 0; i < n; i++) {
        B[i] = (int *)malloc(p * sizeof(int));
        if (B[i] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
    }

    // Input elements of matrix A
    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements of matrix B
    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Perform matrix multiplication
    matrixMultiplication(A, B, C, m, n, p);

    // Display the resultant matrix C
    printf("Resultant matrix C:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    // Free dynamically allocated memory
    for (int i = 0; i < m; i++) {
        free(A[i]);
        free(C[i]);
    }
    for (int i = 0; i < n; i++) {
        free(B[i]);
    }
    free(A);
    free(B);
    free(C);

    return 0;
}
