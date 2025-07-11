#include <stdio.h>
#include <stdlib.h>

int main() {

    int num;

    printf("How many elements you want to store??\n");
    scanf("%d", &num);

    int *ptr;
    ptr = (int *) malloc(num * sizeof(int));

    if(ptr == NULL) {
        printf("Allocation failed!");
        return 1;
    }

    printf("Enter %d elements in array:\n", num);
    for(int i = 0; i < num; i++) {
        printf("Index %d: ", i);
        scanf("%d", &ptr[i]);
    }

    for(int i = 0; i < num; i++) {
        printf("Element %d at index %d\n", ptr[i], i);
    }

    int max = ptr[0], smax = ptr[1];

    if(ptr[0] > ptr[1]) {
        max = ptr[0];
        smax = ptr[1];
    } else {
        max = ptr[1];
        smax = ptr[0];
    }

    for(int i = 2; i < num; i++) {
        if(ptr[i] > max) {
            smax = max;
            max = ptr[i];
        } else if(ptr[i] > smax && ptr[i] < max) {
            smax = ptr[i];
        }
    }

    printf("Second largest is %d", smax);

    free(ptr);

    return 0;
}