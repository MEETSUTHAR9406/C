    #include <stdio.h>

    int main() {

        int num;
        int flag = 0;

        printf("Enter the number: ");
        scanf("%d", &num);

        if(num <= 1) {
            printf("Invalid input.");
            return 1;
        }

        for(int i = 2; i < num / 2; i++) {
            if(num % i == 0) {
                flag = 1;
            } else {
                flag = 0;
            }
        }


        if(flag = 1) {
            printf("%d is a Prime number.", num);
        } else {
            printf("%d is a Non-Prime number.", num);
        }

        return 0;
    }