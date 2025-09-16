#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char str[100];
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};

    printf("Enter your string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int count_vowels = 0;
    int count_consonants = 0;

    int size_str = strlen(str);
    int size_vowels = sizeof(vowels) / sizeof(vowels[0]);

    for(int i = 0; i < size_str; i++) {
        char ch = tolower(str[i]);
        if(ch >= 'a' && ch <= 'z') {
            int is_vowel = 0;
            for(int j = 0; j < size_vowels; j++) {
                if(ch == vowels[j]) {
                    is_vowel = 1;
                    break;
                }
            }

            if(is_vowel) {
                count_vowels++;
            } else {
                count_consonants++;
            }
        }
    }

    printf("There are %d vowels in the string %s", count_vowels, str);
    printf("There are %d consonants in the string %s", count_consonants, str);

    return 0;
}