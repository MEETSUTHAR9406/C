#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *replaceWord(const char *str, const char *oldWord, const char *newWord) {
    char *resultString;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    for(i = 0; str[i] != '\0'; i++) {
        if(strstr(&str[i], oldWord) == &str[i]) {
            count++;
            i = i + oldWordLength - 1;
        }
    }

    resultString = (char *) malloc(i + count * (newWordLength - oldWordLength) + 1);
    if(resultString == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    i = 0;
    while(*str) {
        if(strstr(str, oldWord) == str) {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        } else {
            resultString[i++] = *str++;
        }
    }

    resultString[i] = '\0';
    return resultString;
}

int main() {

    FILE *file_ptr = fopen("Bill.txt", "r");
    FILE *file_ptr2 = fopen("NewBill.txt", "w");

    if(file_ptr == NULL || file_ptr2 == NULL) {
        printf("File not found.\n");
        return 1;
    }

    char str[1000];

    while(fgets(str, sizeof(str), file_ptr) != NULL) {

        char *newStr = replaceWord(str, "{{name}}", "Meet");

        char *temp = newStr;
        newStr = replaceWord(newStr, "{{item}}", "Laptop");
        free(temp);

        temp = newStr;
        newStr = replaceWord(newStr, "{{outlet}}", "Samsung");
        free(temp);

        printf("%s", newStr);
        fprintf(file_ptr2, "%s", newStr);

        free(newStr);
    }

    fclose(file_ptr);
    fclose(file_ptr2);

    return 0;
}