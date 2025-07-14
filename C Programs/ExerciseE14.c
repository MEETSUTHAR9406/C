#include <stdio.h>

int main() {

    char ch;

    printf("Enter one character: ");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' && ch == 'i' || ch == 'I' && ch == 'o' && ch == 'O' && ch == 'u' && ch == 'U') {
        printf("Character '%c' is vowel.", ch);
    } else {
        printf("Character '%c' is consonant.", ch);
    }
    
    return 0;
}