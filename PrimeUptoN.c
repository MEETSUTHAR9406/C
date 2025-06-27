#include <stdio.h>

int main() {

    int num;
    int count;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Prime numbers between 1 and %d are: ", num);

    for(int i = 2; i <= num; i++) {
        count = 0;

        for(int j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                count++;
                break;
            }
        }
        if(count == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}