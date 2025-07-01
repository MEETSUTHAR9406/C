#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d;
    float real, img;

    printf("Enter values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("This is not a quadratic equation. 'a' should not be 0.\n");
        return 1;
    }

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        printf("\nThe roots are real and distinct.\n");
        float x1 = (-b + sqrt(d)) / (2 * a);
        float x2 = (-b - sqrt(d)) / (2 * a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
    else if (d == 0)
    {
        printf("\nThe roots are real and equal.\n");
        float x = -b / (2 * a);
        printf("x = %.2f\n", x);
    }
    else
    {
        printf("\nThe roots are complex and imaginary.\n");
        real = -b / (2 * a);
        img = sqrt(-d) / (2 * a);
        printf("x1 = %.2f + %.2fi\n", real, img);
        printf("x2 = %.2f - %.2fi\n", real, img);
    }

    return 0;
}
