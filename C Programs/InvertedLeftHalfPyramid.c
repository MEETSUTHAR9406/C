#include <stdio.h>

int main() {

    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i = num; i >= 1; i--) {
        for(int j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}