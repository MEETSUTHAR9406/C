#include <stdio.h>

int main() {
    
    int num, sum = 0;
    int digit, reversed = 0;
    
    printf("Enter the numeber: ");
    scanf("%d", &num);
    
    if(num < 0) {
        printf("Can't reverse the negative numbers.");
        return 1;
    }
    
    while(num > 0) {
        digit = num % 10;
        sum = sum + digit;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    
    printf("The reversed number is %d", reversed);
    
    return 0;
}