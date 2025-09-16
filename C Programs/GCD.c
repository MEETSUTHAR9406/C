#include <stdio.h>

int main() {

    int num1, num2;

    printf("Enter two numbers to find its GCD (Greatest Common Divisor): ");
    scanf("%d %d", &num1, &num2);

    int min = (num1 < num2) ? num1 : num2;
    int gcd = 1;

    for(int i = 1; i <= min; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    printf("Greatest Common Divisor (GCD) of %d and %d is %d", num1, num2, gcd);

    return 0;
}