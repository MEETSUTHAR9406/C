#include <stdio.h>

int main() {

    int num1, num2, num3;
    int a, b, c, max;

    // Using if-else statements

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3) {
        printf("Largest number is %d\n", num1);
    } else if(num2 > num1 && num2 > num3) {
        printf("Largest number is %d\n", num2);
    } else if(num3 > num1 && num3 > num2) {
        printf("Largest number is %d\n", num3);
    } else {
        printf("There is no unique Largest number.\n");
    }

    // Using Ternary Operator

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &b);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Largest number using Ternary Operator is %d\n", max);

    return 0;
}