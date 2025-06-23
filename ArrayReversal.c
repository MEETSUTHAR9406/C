#include <stdio.h>

int main() {
    
    int arr[] = {1, 2, 3, 4};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Before reversing the array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nAfter reversing the array: ");
    for(int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}