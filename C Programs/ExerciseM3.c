#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int size;

    printf("Enter max size of your string: ");
    scanf("%d", &size);
    getchar();

    char vowel[] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};

    char *str = (char *) malloc((size + 1) * sizeof(char));

    if(str == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }

    printf("Enter your string: ");
    fgets(str, size + 1, stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    int vCount = 0, cCount = 0, dCount = 0;

    for(int i = 0; i < len; i++) {
        int isVowel = 0;

        for(int j = 0; j < strlen(vowel); j++) {
            if(str[i] == vowel[j]) {
                isVowel = 1;
                vCount++;
            }
        }

        if(!isVowel) {
            if(str[i] >= '0' && str[i] <= '9') {
                dCount++;
            } else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
                cCount++;
            } else {
                printf("Invalid input.");
                free(str);
                return 1;
            }
        }
    }

    printf("\nThere are %d vowels in %s", vCount, str);
    printf("\nThere are %d consonants in %s", cCount, str);
    printf("\nThere are %d digits in %s", dCount, str);

    free(str);

    return 0;
}