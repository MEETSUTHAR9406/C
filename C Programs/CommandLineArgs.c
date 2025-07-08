    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>

    int main(int argc, char const *argv[]) {
        
        if(argc != 4) {
            printf("The correct format is:\n%s [add|subtract|multiply|divide] num1 num2", argv[0]);
            return 1;
        }

        int num1 = atoi(argv[2]);
        int num2 = atoi(argv[3]);

        if(strcmp(argv[1], "add") == 0) {
            printf("The addition is %d\n", num1 + num2);
        } else if(strcmp(argv[1], "subtract") == 0) {
            printf("The subtraction is %d\n", num1 - num2);
        } else if(strcmp(argv[1], "multiply") == 0) {
            printf("The multiplication is %d\n", num1 * num2);
        } else if(strcmp(argv[1], "divide") == 0) {
            if(num2 == 0) {
                printf("Can't divide by zero.");
            } else {
                printf("The division is %d\n", num1 / num2);
            }
        } else {
            printf("Invalid operation.\n");
        }

        return 0;
    }
