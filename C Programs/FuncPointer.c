#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b) {
    return a + b;
}

void greet(int (*FP) (int, int)) {
    printf("Hello user!\n");
    printf("The sum of a and b is %d\n", FP(5, 7));
}

void greet1(int (*FP) (int, int)) {
    printf("Good Morning user!\n");
    printf("The sum of a and b is %d\n", FP(5, 7));
}

int main() {

    int (*ptr)(int, int);
    ptr = sum;
    greet(ptr);
    greet1(ptr);

    return 0;
}