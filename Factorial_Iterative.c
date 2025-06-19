#include <stdio.h>

int main() {
    
    int fact = 1;
    int num;
    
    printf("Enter number to find its factorial: ");
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++) {
        fact *= i;
    }
    
    printf("The factorial of %d is %d", num, fact);
    
    return 0;
}