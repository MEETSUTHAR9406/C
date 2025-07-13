#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int size1;
    int size2;

    printf("Enter max size of string 1: ");
    scanf("%d", &size1);
    getchar();

    printf("Enter max size of string 2: ");
    scanf("%d", &size2);
    getchar();

    if(size1 != size2) {
        printf("Strings are not equal.");
        return 1;
    }

    char *str = (char *) malloc((size1 + 1) * sizeof(char));
    char *string = (char *) malloc((size2 + 1) * sizeof(char));

    if(str == NULL || string == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }

    printf("Enter string 1: ");
    scanf(" %[^\n]", str);
    getchar();

    printf("Enter string 2: ");
    scanf(" %[^\n]", string);

    printf("String 1: %s\n", str);
    printf("String 2: %s\n", string);

    int flag = 0;
    for(int i = 0; i < size1; i++) {
        for(int j = 0; j < size2; j++) {
            if(str[i] == string[j]) {
                flag = 1;
            }
        }
    }

    if(flag == 0) {
        printf("Two strings are anagrams.");
    } else {
        printf("Two strings are not anagrams");
    }

    return 0;
}