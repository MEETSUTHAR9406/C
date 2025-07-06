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
(05/07/2025)

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

#Day - 3        -  Did Matrix Multiplication.
(06/07/2025)

==========================================================================================


## Matrix Multiplication  
- Tried doing Matrix Multiplication of 2D matrix and got succeeded.  
- Used functions and user inputs to get the size of the Matrix.

## Preprocessor Directives  
Learned about:  
`#include`, `#define`, `#undef`, `#ifdef`, `#ifndef`, `#if`, `#else`, `#elif`, `#endif`

#include 
 - To include another file.  
#include <stdio.h>
#include "myfile.h"

#define
- To define a constant or macro.
#define PI 3.14

#undef
- To undefine a macro which was defined earlier.
#undef PI

#ifdef
- To check if macro is actually defined.
#define DEBUG
#ifdef DEBUG
  printf("It is defined.");
#endif

#ifndef
- To check if macro is not defined. If not defined you can define it.
#ifndef PI
#define PI 3.14
#endif

#if, #else, #elif, #endif
- Used for conditional compilation for macros.
#define VALUE 5

#if VALUE == 5
  printf("The value is 5\n");
#elif VALUE == 10
  printf("The value is 10\n");
#else 
  printf("Value is something else.");
#endif // Closes all blocks like #if, #ifdef, #ifndef.