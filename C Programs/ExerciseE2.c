#include <stdio.h>

int main() {

    int num;
    int sum = 0;
    int digit;

    printf("Enter the number: ");
    scanf("%d", &num);
    
    int temp = num;

    while(num > 0) {
        digit = num % 10;
        sum = sum + digit;
        num /= 10;
    }

    printf("The number is %d", temp);
    printf("\nThe sum of digits is: %d", sum);

    return 0;
}