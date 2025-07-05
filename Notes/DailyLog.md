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

#Day - 2        -  Learned about Dangling Pointer & Wild Pointer.   
(5/7/2025)

==========================================================================================

## Dangling Pointer: It is like freeing the Pointer and then trying to access it.
If we try to access it we might get Garbage Value.

### Example:

int a = 10;
int *ptr = (int *) malloc(sizeof(int));
free(ptr);
printf("%d", *ptr); // This is Dangling Pointer
ptr = NULL; // This becomes NULL Pointer now

## Wild Pointer : It is like not assigning value to the pointer but then trying to dereference it.

### Example:

int a = 24;
int *ptr;

printf("%d", *ptr); // This is a Wild Pointer.