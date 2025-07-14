#include <stdio.h>

int main() {

    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3) {
        printf("%d is largest number.", num1);
        return 1;
    } else if(num2 > num1 && num2 > num3) {
        printf("%d is largest number.", num2);
        return 1;
    } else if(num3 > num1 && num3 > num2) {
        printf("%d is largest number.", num3);
        return 1;
    } else {
        printf("Invalid input.");
        return 1;
    }

    return 0;
}