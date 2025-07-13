#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int n1, n2;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    int gcd;

    int num1 = n1;
    int num2 = n2;

    while(n2 != 0) {
        gcd = n2;
        n2 = n1 % n2;
        n1 = gcd;
    }

    int lcm = (num1 * num2) / gcd;

    printf("\nG.C.D. of %d and %d is %d", num1, num2, gcd);
    printf("\nL.C.M. of %d and %d is %d", num1, num2, lcm);

    return 0;
}