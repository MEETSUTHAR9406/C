#include <stdio.h>

int main() {

    int num;
    int count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Invalid input.");
        return 1;
    }

    int temp = num;
    int digit;

    while(num > 0) {
        digit = num % 10;
        count++;
        num /= 10;
    }

    printf("The digit in %d is %d", temp, count);

    return 0;
}