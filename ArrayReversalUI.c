#include <stdio.h>

int main() {
    
    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Remember! Enter 5 elements in the array.\n");
    
    // Taking input from user for array.
    
    for(int i = 0; i < size; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    // Printing your enetered array.
    
    printf("\nYour entered array is: ");
    for(int i = 0; i < size; i++) {
        printf("\nAt index %d the element is %d", i, arr[i]);
    }
    
    // Reversing the array.
    
    printf("\n\nReversed array: ");
    for(int i = size - 1; i >= 0; i--) {
        printf("\nAt index %d the element is %d", i, arr[i]);
    }
    
    return 0;
}