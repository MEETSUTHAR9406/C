#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char str[100];
    char s[100];

    printf("Enter your string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(int i = 0; i < strlen(str); i++) {
        s[i] = str[i];
    }
    s[strlen(str)] = '\0';

    printf("The original string is: %s", str);
    printf("\nThe copied string is: %s", s);

    return 0;
}