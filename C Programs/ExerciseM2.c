#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char str[100];

    printf("Enter your string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    int isPalindrome = 1;

    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome == 1) {
        printf("\n%s is a Palindrome string.", str);
    } else {
        printf("\n%s is not an Palindrome string.", str);
    }

    return 0;
}