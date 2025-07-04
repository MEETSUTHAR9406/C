# DailyLog is about my Learning throughout the day.

#Day - 1        -  Learned about Void Pointer and NULL pointer.
(04/07/2025)

==========================================================================================

## Void Pointer: A generic pointer
It is a Pointer that can hold any data type address, but we need to exclusively define it.

### Example:

int x = 10;
void *ptr = &x;

printf("%d", *(int *)ptr); --> // 10
printf("%d", *ptr); --> // Can't do like this.

## NULL Pointer: It is like defining NULL to pointer then assigning values whenever need it.
// If we don't declare NULL then it might print Garbage Value.

### Example:

int *ptr = NULL;
int choice = 1;

if(choice) {
  ptr = (int *)malloc(sizeof(int));
  *ptr = 42;
}

if(ptr != NULL) 
  printf("%d", *ptr); --> // 42
else
  printf("This pointer is NULL.");
