#include <stdio.h>

int main() {
    
    int num, count = 0, digit = 0;
    int temp;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    temp = num;
    
    while(num > 0) {
        digit = num % 10;
        count++;
        num /= 10;
    }
    
    printf("There are %d digits in %d", count, temp);
    
    return 0;
}