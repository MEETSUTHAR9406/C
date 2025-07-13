#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int num;
    
    printf("Enter the number: ");
    scanf("%d", &num);

    int *arr = (int *) malloc(num * sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }

    int sum = 0;

    for(int i = 0; i < num - 1; i++) {
        printf("At index %d, Element: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int exp_sum = (num * (num + 1)) / 2;
    int miss_num = exp_sum - sum;

    printf("\nMissing number is %d", miss_num);

    free(arr);

    return 0;
}