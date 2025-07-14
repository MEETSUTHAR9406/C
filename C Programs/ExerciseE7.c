#include <stdio.h>

int main() {

    int num;
    int t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }



    return 0;
}