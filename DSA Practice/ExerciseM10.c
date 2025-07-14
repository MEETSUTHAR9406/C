#include <stdio.h>
#include <math.h>

int main() {

    int num, digit = 0, armstrong = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    int temp = num;
    int temp_num = num;

    int count = 0;

    while(num > 0) {
        count++;
        num /= 10;
    }

    while(temp > 0) {
        digit = temp % 10;
        armstrong += round(pow(digit, count));
        temp /= 10;
    }   

    if(temp_num == armstrong) {
        printf("%d is an armstrong number.", armstrong);
    } else {
        printf("%d is Not an armstrong number.", armstrong);
    }

    return 0;
}