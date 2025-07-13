#include <stdio.h>

void transpose(int rows, int cols, int convert[cols][rows], int A[rows][cols]) {
    // Transpose logic
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            convert[i][j] = A[j][i];
        }
    }

    // Print transposed matrix
    printf("\n🔁 Transposed Matrix (%d x %d):\n", cols, rows);
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%5d", convert[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int A[rows][cols];
    int convert[cols][rows];

    // Input matrix elements
    printf("\nEnter elements for a %d x %d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Print original matrix
    printf("\nOriginal Matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%5d", A[i][j]);
        }
        printf("\n");
    }

    // Transpose and print
    transpose(rows, cols, convert, A);

    return 0;
}
