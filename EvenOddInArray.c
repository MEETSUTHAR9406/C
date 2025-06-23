#include <stdio.h>

int main() {
    
    int arr[] = {2, 3, 5, 8, 6};
    int Evencount = 0, Oddcount = 0;
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d is a Even number.\n", arr[i]);
            Evencount++;
        } else if(arr[i] % 2 != 0) {
            printf("%d is a Odd number.\n", arr[i]);
            Oddcount++;
        }
    }
    
    printf("\nThere are %d Even numbers.", Evencount);
    printf("\nThere are %d Odd numbers.", Oddcount);
    
    return 0;
}