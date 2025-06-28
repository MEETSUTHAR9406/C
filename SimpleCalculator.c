#include <stdio.h>

int main() {
    
    int num1;
    int num2;
    int choice, sum, sub, mul, divi;
    
    printf("Enter the number 1: ");
    scanf("%d", &num1);
    
    printf("Enter the number 2: ");
    scanf("%d", &num2);
    
    printf("Welcome to Calculator. You need to choose an option.");
    printf("\n1. Addition.\n2. Subtraction.\n3. Multiplication.\n4. Division.\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            sum = num1 + num2;
            printf("Addition of two numbers is %d", sum);
            break;
            
        case 2:
            sub = num1 - num2;
            printf("Subtracion of two numbers is %d", sub);
            break;
            
        case 3:
            mul = num1 * num2;
            printf("Multiplication of two numbers is %d", mul);
            break;
            
        case 4:
            if(num2 == 0) {
                printf("Can't divide by Zero.");
                return 1;
            }
            divi = num1 / num2;
            printf("Division of two numbers is %d", divi);
            break;
            
        default:
            printf("Invalid Value! Try again.");
            break;
    }
    
    return 0;
}