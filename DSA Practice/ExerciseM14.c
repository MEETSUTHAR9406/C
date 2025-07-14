#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {


    int size1;
    int size2;

    printf("Enter max size of array 1: ");
    scanf("%d", &size1);

    printf("Enter max size of array 2: ");
    scanf("%d", &size2);

    int size3 = size1 + size2;

    int *arr1 = (int *) malloc(size1 * sizeof(int));
    int *arr2 = (int *) malloc(size2 * sizeof(int));
    int *arr3 = (int *) malloc(size3 * sizeof(int));

    if(arr1 == NULL || arr2 == NULL || arr3 == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }

    printf("\nEnter values for array 1:\n");
    for(int i = 0; i < size1; i++) {
        printf("At index %d, Element: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter values for array 2:\n");
    for(int i = 0; i < size2; i++) {
        printf("At index %d, Element: ", i);
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < size3; i++) {
        if(i < size1) {
            arr3[i] = arr1[i];
        } else {
            arr3[i] = arr2[i - size1];
        }
    }

    printf("\nMergeed Array 3:\n");
    for(int i = 0; i < size3; i++) {
        printf("At index %d, Element: %d\n", i, arr3[i]);
    }

    free(arr1);
    free(arr2);
    free(arr3);

    return 0;
}