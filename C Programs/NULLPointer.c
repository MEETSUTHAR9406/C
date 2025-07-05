#include <stdio.h>

int main() {

    int a = 10;
    int *p = &a;
    int *ptr = NULL;

    if(ptr != NULL) {
        printf("Value is %d", ptr);
    } else {
        printf("\nThis is a NULL Pointer.");
    }

    if(p != NULL) {
        printf("\nValue is %d", *p);
    } else {
        printf("\nThis is a NULL Point.");
    }

    return 0;
}