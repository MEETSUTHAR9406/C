#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, i = 0;
    int *i2;

    while(i < 223442) {
        printf("Welcome to C Programming.\n");
        i2 = malloc(234324 * sizeof(int));
        if(i % 100) {
            getchar();
        }
        i++;
        free(i2);
    }
    
    return 0;
}