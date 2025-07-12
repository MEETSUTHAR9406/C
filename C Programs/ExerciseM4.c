#include <stdio.h>
#include <stdlib.h>

int main() {

    int size;

    printf("How many elements you want to store in array?\n");
    printf("Enter your choice: ");
    scanf("%d", &size);
    getchar();

    int *arr = (int *) malloc(size * sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }

    for(int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nYour array is:\n");
    for(int i = 0; i < size; i++) {
        printf("\nAt index %d the element is %d", i, arr[i]);
    }

    int temp = 0;
    int swapped = 0;

    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            swapped = 1;
            }
        }
        if(swapped == 0) {
            break;
        }
    }

    printf("\nYour array is:\n");
    for(int i = 0; i < size; i++) {
        printf("\nAt index %d the element is %d", i, arr[i]);
    }

    free(arr);

    return 0;
}