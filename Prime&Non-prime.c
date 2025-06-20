#include <stdio.h>

int main() {

    int num, flag = 0;

    printf("Enter a number to check if it is Prime or Non-prime: ");
    scanf("%d", &num);

    if(num <= 1) {
        printf("The number %d is Non-prime.\n", num);
        return 0;
    }

    for(int i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            flag = 1;
            break;
        }
    }

    if(flag == 0) {
        printf("The number %d is Prime.\n", num);
    } else {
        printf("The number %d is Non-prime.\n", num);
    }

    return 0;
}