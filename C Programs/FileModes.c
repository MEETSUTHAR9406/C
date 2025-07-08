#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *file_ptr = fopen("File1.txt", "w");
    FILE *file_ptr2 = fopen("File2.txt", "w+");

    if(file_ptr == NULL || file_ptr2 == NULL) {
        printf("File not found.");
        return 1;
    }

    // Print first character from the file.

    /* 
    char ch = fgetc(file_ptr);
    printf("First character is %c\n", ch);
    */

    // Calling this again and again will increment one character to print.
    
    /*
    ch = fgetc(file_ptr);
    printf("First character is %c\n", ch);
    */

    // To print certain number of strings from file.

    char str[5];
    fgets(str, sizeof(str), file_ptr2);
    printf("String is %s\n", str);

    fputc('M', file_ptr);
    fputs("This is Meet.", file_ptr2);

    if(file_ptr != NULL || file_ptr2 != NULL) {
        printf("Content printed successfully.");
    }

    return 0;
}   