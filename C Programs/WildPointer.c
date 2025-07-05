#include <stdio.h>

int main() {

    int a = 23;
    int *ptr; // This is a Wild Pointer
    // *ptr = 34; // The Program might crash with this.

    ptr = &a; // This is now not a Wild Pointer.
    printf("%d", *ptr); // 23

    return 0;
} 