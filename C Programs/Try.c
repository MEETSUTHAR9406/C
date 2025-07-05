#include <stdio.h>
#include <stdlib.h>

int *createNumber() {
    int *p = (int *) malloc(sizeof(int));
    *p = 100;
    free(p);
    return p;
}

int main() {

    int *ptr = createNumber();
    printf("%d", *ptr);

    return 0;
}