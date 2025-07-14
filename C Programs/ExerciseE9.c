#include <stdio.h>

int main() {

    int num;

    printf("Enter the number to print multiplication table: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Invalid input.");
        return 1;
    }

    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}