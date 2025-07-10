#include <stdio.h>

int MatrixA(int rows, int cols, int a[rows][cols]) {
    printf("\nEnter values for matrix A:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
}

int displayA(int rows, int cols, int a[rows][cols]) {
    printf("Matrix A is:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%4d ", a[i][j]);
        }
        printf("\n");
    }
}

int transpose(int rows, int cols, int a[rows][cols], int tp[cols][rows]) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            tp[j][i] = a[i][j];
        }
        printf("\n");
    }
}

int displaytp(int rows, int cols, int tp[cols][rows]) {
    printf("Transpose matrix is:\n");
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            printf("%4d ", tp[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int rows, cols;

    printf("Enter no. of rows & cols for matrix: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols];
    int tp[cols][rows];
    
    MatrixA(rows, cols, a);
    displayA(rows, cols, a);
    transpose(rows, cols, a, tp);
    displaytp(rows, cols, tp);

    return 0;
}