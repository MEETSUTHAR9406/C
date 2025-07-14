#include <stdio.h>

int main() {

    int num;
    int reversed = 0, digit;
    
    printf("Enter the number: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Invalid input.");
        return 1;
    }
    
    int temp = num;

    while(num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if(temp == reversed) {
        printf("%d is a Palindrome number.", temp);
    } else {
        printf("%d is not a Palindrome number.", temp);
    }

    return 0;
}