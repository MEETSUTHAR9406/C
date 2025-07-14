#include <stdio.h>

void NaturalNum(int num) {
    for(int i = 1; i <= num; i++) {
        if(num < 0 || num == 0) {
            printf("Invalid.");
        } else {
            printf("%d ", i);
        }
    }
}

int main() {

    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    NaturalNum(num);

    return 0;
}