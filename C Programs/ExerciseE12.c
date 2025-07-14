#include <stdio.h>

int main() {

    float num1, num2;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("What do you want to do??\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division.\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: 
            printf("%.2f + %.2f is %.2f", num1, num2, num1 + num2);
            break;

        case 2:
            printf("%.2f - %.2f is %.2f", num1, num2, num1 - num2);
            break;

        case 3:
            printf("%.2f * %.2f is %.2f", num1, num2, num1 * num2);
            break;

        case 4:
            if(num2 == 0) {
                printf("Cannot divide by zero.");
            } else {
                printf("%.2f / %.2f is %.2f", num1, num2, num1 / num2);
                break;
            }

        case 5:
            printf("Invalid input.");
            break;
    }
    return 0;
}