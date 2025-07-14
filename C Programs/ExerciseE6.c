#include <stdio.h>

int main() {

    int num; 
    int fact = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    if(num <= 0) {
        printf("Invalid input.");
        return 1;
    }

    for(int i = 1; i <= num; i++) {
        fact = fact * i;
    }

    printf("%d", fact);

    return 0;
}