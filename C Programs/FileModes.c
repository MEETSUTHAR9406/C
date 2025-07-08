#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *file_ptr = fopen("File1.txt", "r");
    FILE *file_ptr2 = fopen("File2.txt", "r");

    if(file_ptr == NULL || file_ptr2 == NULL) {
        printf("File not found.");
        return 1;
    }

    char ch = fgetc(file_ptr);
    printf("First character is %c", ch);

    char str[5];
    fgets(str, sizeof(str), file_ptr2);
    printf("%s", str);

    return 0;
}