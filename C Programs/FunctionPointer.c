#include <stdio.h>

int Sum(int a, int b) {
    return a + b;
}

int main() {

    printf("The sum of a and b is %d\n", Sum(5, 10));

    int (*FP) (int, int);
    FP = &Sum;

    int d = (*FP) (4, 6);

    printf("The value of d is %d", d);

    return 0;
}