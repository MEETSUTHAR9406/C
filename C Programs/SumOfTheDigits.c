#include <stdio.h>

int main() {
    
    int num, sum = 0;
    int digit;
    
    printf("Enter the numeber: ");
    scanf("%d", &num);
    
    if(num < 0) {
        printf("Can't find the sum of the negative numbers.");
        return 1;
    }
    
    while(num > 0) {
        digit = num % 10;
        sum = sum + digit;
        num /= 10;
    }
    
    printf("The sum of the digits is %d\n", sum);
    
    return 0;
}