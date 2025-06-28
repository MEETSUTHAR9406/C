#include <stdio.h>

int main() {
    
    int num, count = 0, digit = 0, reversed = 0;
    int temp;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    temp = num;
    
    if(num < 0) {
        printf("Can't find solution for negative numbers.");
        return 1;
    }
    
    while(num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        count++;
        num /= 10;
    }
    
    if(reversed == temp) {
        printf("The number %d is a Palindrome Number.");
    } else {
        printf("The number %d is Not a Palindrome Number.");
    }
    printf("\nThere are %d digits in %d", count, temp);
    
    return 0;
}