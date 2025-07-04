#include <stdio.h>

int leap_year(int year) {
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return printf("%d is a leap year.\n", year);
    } else {
        return printf("%d is not a leap year.\n", year);
    }
}

int main() {

    leap_year(2000);
    leap_year(1900);
    leap_year(2020);
    leap_year(2021);

    return 0;
}