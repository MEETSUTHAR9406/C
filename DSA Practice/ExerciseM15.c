#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int size;

    printf("Enter max size of your string: ");
    scanf("%d", &size);
    getchar();

    char *str = (char *) malloc((size + 1) * sizeof(char));

    if(str == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }   

    printf("Enter your string: ");
    fgets(str, (size + 1), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("The reversed string is %s", strrev(str));

    free(str);

    return 0;
}