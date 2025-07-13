#include <stdio.h>

int main() {

    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    int flag;

    for(int i = 2; i <= num; i++) {
        flag = 0;
        for(int j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                flag++;
                break;
            }
        }
        if(flag == 0) {
            printf("%d ", i);
        }
    }



    return 0;
}