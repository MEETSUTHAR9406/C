#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    FILE *ptr;
    char string[34] = "This is Meet";

    // Reading a File

    // ptr = fopen("DemoFile.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The content of the file has: %s\n", string);

    // Writing a File

    ptr = fopen("DemoFile.txt", "w");
    fprintf(ptr, "%s", string);

    return 0;
}