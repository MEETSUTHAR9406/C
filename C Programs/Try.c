#include <stdio.h>

float avg(float a, float b) {
    return (a + b) / 2;
}

void GreetGA(float (*FuncP)(float, float), int a, int b) {
    printf("Good Afternoon, User!\n");
    printf("Average is %.2f\n", FuncP(a, b));
}

void GreetGN(float (*FuncP)(float, float), int a, int b) {
    printf("Good Night, User!\n");
    printf("Average is %.2f", FuncP(a, b));
}

int main() {

    float a, b;

    printf("Enter value of a and b: ");
    scanf("%f %f", &a, &b);
    printf("Average is %.2f\n", avg(a, b));

    float (*ptr) (float, float);
    ptr = &avg;
    GreetGN(ptr, a, b);
    GreetGA(ptr, a, b);

    return 0;
}