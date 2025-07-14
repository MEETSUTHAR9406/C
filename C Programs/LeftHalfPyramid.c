#include <stdio.h>

int main() {

    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++) {
        for(int j = 0; j < 2 * (num - i) - 1; j++) {
            printf(" ");
        }

        for(int k = 0; k <= i; k++) {
            printf("%d ", k + 1);
        }
        printf("\n");
    }

    return 0;
}