#include <stdio.h>
#include <math.h>

int main() {

    float Principal, Rate, Time, CI = 0;

    printf("Enter Principal amount: ");
    scanf("%f", &Principal);
    
    printf("Enter Time in years: ");
    scanf("%f", &Time);

    printf("Enter Rate of interest: ");
    scanf("%f", &Rate);

    CI = Principal * pow((1 + Rate / 100), Time) - Principal;
    printf("Compound Interest = %f\n", CI);

    return 0;
}