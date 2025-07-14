#include <stdio.h>

int main() {

    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Invalid input.");
        return 1;
    }

    if(num % 2 == 0) {
        printf("%d is even.", num);
    } else {
        printf("%d is Odd.", num);
    }

    return 0;
}