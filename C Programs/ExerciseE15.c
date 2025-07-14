#include <stdio.h>

int main() {

    int num;
    int sum = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        sum += i;
    }

    printf("Sum up-to %d numbers is %d", num, sum);

    return 0;
}