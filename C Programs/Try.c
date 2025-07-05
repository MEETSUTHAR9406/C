#include <stdio.h>

int main() {

    int x = 10;
    void *ptr = &x;

    printf("%d", *(int *)ptr);

    return 0;
}