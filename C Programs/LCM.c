#include <stdio.h>

int main() {

    int num1, num2;

    printf("Enter two numbers to find its LCM (Least Common Multiple): ");
    scanf("%d %d", &num1, &num2);

    int min = (num1 < num2) ? num1 : num2;
    int gcd = 1;

    for(int i = 1; i <= min; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    int LCM = (num1 * num2) / (gcd);

    printf("Least Common Multiple (LCM) of %d and %d is %d", num1, num2, LCM);

    return 0;
}