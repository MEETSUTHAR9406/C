#include <stdio.h>

int main() {

    int num;
    int reversed = 0, digit;

    printf("Enter the number: ");
    scanf("%d", &num);

    int temp = num;

    while(num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    printf("Original number is %d", temp);
    printf("\nReversed number is %d", reversed);

    return 0;
}