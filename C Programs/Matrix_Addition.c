#include <stdio.h>
#include <stdlib.h>

void getMatrixInput(int *matrix, int p, int q) {
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", (matrix + i * q + j));
        }
    }
}

void printMatrix(int *matrix, int p, int q) {
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            printf("%d\t", *(matrix + i * q + j));
        }
        printf("\n");
    }
}

int* addition(int *matrix1, int *matrix2, int p, int q) {
    int *result = (int*) malloc(p * q * sizeof(int));

    if(result == NULL) {
        printf("Memory allocation failed.");
        exit(0);
    }

    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            int index = i * q + j;
            *(result + index) = *(matrix1 + index) + *(matrix2 + index);
        }
    }
    
    return result;
}


int main() {

    int p, q;

    printf("Enter the dimensions of the matrices (rows columns): ");
    scanf("%d %d", &p, &q);

    int size = p * q;

    int *matrix1 = (int *)malloc(size * sizeof(int));
    int *matrix2 = (int *)malloc(size * sizeof(int));

    if (matrix1 == NULL) {
        printf("Memory allocation failed.\n");
        exit(0);
    }

    if (matrix2 == NULL) {
        printf("Memory allocation failed.\n");
        exit(0);
    }

    printf("\nEnter elements for Matrix 1 (%d x %d): ", p, q);
    getMatrixInput(matrix1, p, q);

    printf("\nEnter elements for Matrix 2 (%d x %d): ", p, q);
    getMatrixInput(matrix2, p, q);

    int *resultMatrix = addition(matrix1, matrix2, p, q);

    if(resultMatrix == NULL) {
        free(matrix1);
        free(matrix2);
        exit(0);
    }

    printf("\nMatrix 1:\n");
    printMatrix(matrix1, p, q);

    printf("\nMatrix 2:\n");
    printMatrix(matrix2, p, q);

    printf("\nResult of Addition:\n");
    printMatrix(resultMatrix, p, q);

    free(matrix1);
    free(matrix2);
    free(resultMatrix);

    return 0;
}