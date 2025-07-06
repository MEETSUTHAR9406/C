#include <stdio.h>

void MatrixA(int row1, int col1, int A[row1][col1]) {

    // Taking input for Matrix A
    printf("Enter values of Matrix A:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("Element [%d][%d]: ", i, j);
            if (scanf("%d", &A[i][j]) != 1) {
                printf("Invalid input.\n");
                return;
            }
        }
        printf("\n");
    }

    // Printing the Matrix A
    printf("\nMatrix A is:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("%4d ", A[i][j]);
        }
        printf("\n");
    }
}

void MatrixB(int row2, int col2, int B[row2][col2]) {


    // Taking input for Matrix B
    printf("\nEnter values of Matrix B:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            printf("Element [%d][%d]: ", i, j);
            if (scanf("%d", &B[i][j]) != 1) {
                printf("Invalid input.\n");
                return;
            }
        }
    }

    // Printing the Matrix B
    printf("\nMatrix B is:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%4d ", B[i][j]);
        }
        printf("\n");
    }
}

void MatrixC(int row1, int row2, int col1, int col2, int A[row1][col1], int B[row2][col2]) {

    int C[row1][col2];

    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {
            C[i][j] = 0;
            for(int k = 0; k < col1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatrix C is:\n");
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {
            printf("%4d ", C[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int row1, row2, col1, col2;

    printf("Enter number of rows and col for Matrix A: ");
    if (scanf("%d %d", &row1, &col1) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter number of rows and col for Matrix B: ");
    if (scanf("%d %d", &row2, &col2) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (col1 == row2) {
        printf("Matrix Multiplication is possible for Matrix A(%d X %d) and Matrix B(%d X %d).\n", row1, col1, row2, col2);
    } else {
        printf("Matrix Multiplication is not possible. Try entering valid Matrix.\n");
        return 1;
    }

    int A[row1][col1], B[row2][col2];

    MatrixA(row1, col1, A);
    MatrixB(row2, col2, B);

    MatrixC(row1, row2, col1, col2, A, B);

    return 0;
}