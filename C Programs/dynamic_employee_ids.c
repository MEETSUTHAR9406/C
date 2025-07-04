#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 30

int main() {

    int num;

    printf("Enter the number of employees: ");
    scanf("%d", &num);

    char *ptr;

    ptr = (char *) calloc(num, sizeof(char));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < num; i++) {
        printf("Enter employee ID for employee %d: ", i + 1);
        scanf("%s", ptr + (i * MAX));
    }

    printf("\nEmployee IDs entered:\n");
    for (int i = 0; i < num; i++) {
        printf("Employee %d: %s\n", i + 1, ptr + (i * MAX));
    }

    free(ptr);

    return 0;
}