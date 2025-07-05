#include <stdio.h>
#include <stdlib.h> 

int *Dangling() {
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;

    return &sum;
}
int main() {

    int *ptr = (int *) malloc(sizeof(int));
    ptr[0] = 342;
    ptr[1] = 3412;
    ptr[2] = 3417;
    ptr[3] = 3;

    free(ptr); // ptr is now a Dangling Pointer


    int *dangPtr =  Dangling();

    int *danglingPtr3;

    {
        int a = 12;

        danglingPtr3 = &a;
    }

    return 0;
}