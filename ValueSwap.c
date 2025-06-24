#include <stdio.h>

int main() {
    
    int a, b;
    int temp;
    
    printf("Enter value of a & b to swap their values: ");
    scanf("%d %d", &a, &b);
    
    printf("\nBefore swapping: ");
    printf("a = %d, b = %d", a, b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("\nAfter swapping: ");
    printf("a = %d, b = %d", a, b);
    
    return 0;
}