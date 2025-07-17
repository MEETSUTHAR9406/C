#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int arr[10];

    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Size of the array is %d", size);

    return 0;
}