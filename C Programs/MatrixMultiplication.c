#include <stdio.h>

void MatrixA(int row1, int col1) {

    int A[row1][col1];
    // Taking input for Matrix A
    printf("Enter values of Matrix A:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix A is:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

void MatrixB(int row2, int col2) {

    int B[row2][col2];

    // Taking input for Matrix B
    printf("\nEnter values of Matrix B:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nMatrix B is:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}

void MatrixC(int row1, int row2, int col1, int col2, int MatrixA[row1][col1], int MatrixB[row2][col2]) {

    int sum;
    int C[row1][col1];

    for(int i = 0; i < col1; i++) {
        for(int j = 0; j < row2; j++) {
            C[i][j] = 0;
            for(int k = 0; k < col1; k++) {
                sum = MatrixA[i][j] + MatrixB[j][i];
            }
        }
        printf("\n");
    }
}

int main() {

    int row1, row2, col1, col2;

    printf("Enter number of rows and col for Matrix A: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter number of rows and col for Matrix B: ");
    scanf("%d %d", &row2, &col2);

    // printf("You want to do Matrix Multiplication of Matrix A(%d X %d) and Matrix B(%d X %d).", row1, col1, row2, col2);

    if (col1 == row2) {
        printf("Matrix Multiplication is possible for Matrix A(%d X %d) and Matrix B(%d X %d).\n", row1, col1, row2, col2);
    } else {
        printf("Matrix Multiplication is not possible. Try entering valid Matrix.\n");
        return 1;
    }

    MatrixA(row1, col1);
    MatrixB(row2, col2);
    MatrixC(row1, row2, col1, col2, MatrixA, MatrixB);

    // int sum;
    // int C[row1][col1];

    // for(int i = 0; i < col1; i++) {
    //     for(int j = 0; j < row2; j++) {
    //         C[i][j] = 0;
    //         for(int k = 0; k < row2; k++) {
    //             sum = MatrixA[i][j] + MatrixB[j][i];
    //         }
    //     }
    //     printf("\n");
    // }
    return 0;
}