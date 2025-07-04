#include <stdio.h>

int main() {
    int arr[100];
    int num;
    int max, min;

    printf("How many elements do you want to store in array?\n");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("Enter value at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n--- Elements in Array ---\n");
    for (int i = 0; i < num; i++) {
        printf("Element %d is at index %d\n", arr[i], i);
    }

    max = arr[0];
    min = arr[0];

    for (int i = 1; i < num; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("\nMaximum value in array = %d\n", max);
    printf("Minimum value in array = %d\n", min);

    return 0;
}
