#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int *) malloc(size * sizeof(int));
    int *visited = (int *) malloc(size * sizeof(int));

    if(arr == NULL || visited == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }

    for(int i = 0; i < size; i++) {
        printf("Index %d, Element: ", i + 1);
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        if (visited[i] == 1)
            continue;

        int count = 1;

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        visited[i] = 1;

        printf("Element %d comes %d time%s.\n", arr[i], count, (count > 1) ? "s" : "");
    }

    free(arr);
    free(visited);

    return 0;
}