#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char str[] = "Hello World";
    
    for(int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}