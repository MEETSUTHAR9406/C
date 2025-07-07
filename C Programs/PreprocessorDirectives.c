#include <stdio.h>
#include "Palindrome.c" // Includes other files
#define PI 3.14
#define SQUARE(x) x * x
// #undef PI

int main() {

    float var = PI;
    int area = 5;
    printf("This is PI %.2f\n", var);
    printf("The area is %f", PI * SQUARE(area));


    printf("\nToday Date is %s", __DATE__); // Fetches current date from the system.
    printf("\nANSI: %d", __STDC__);
    printf("\nFile name is %s", __FILE__); // Fetches the File name from the system. 
    printf("\nLine number is %d", __LINE__); // Fetches the Line number where this is written from the system.
    printf("\nCurrent time is %s", __TIME__); // Fetches the current time from the system.

    return 0;
}
