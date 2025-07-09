#include <stdio.h>
#include <math.h>  
#define PI 3.14 

float areaofcircle(float r) {
    printf("Area of circle is:\n");
    return PI * r * r;
}

float Edistance(float x1, float x2, float y1, float y2) {
    printf("Euclidean distance between two points is:\n");
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {

    float x1, x2, y1, y2;
    float r;

    printf("Enter the value of x1 and x2: ");
    scanf("%f %f", &x1, &x2);

    printf("Enter the value of y1 and y2: ");
    scanf("%f %f", &y1, &y2);
    
    float (*fptr) (float, float, float, float) = &Edistance;

    float r = fptr(x1, x2, y1, y2);
    printf("%.2f", r);

    float (*areaptr) (float) = &areaofcircle;

    float area = areaptr(r);
    printf("%.2f", area);

    return 0;
}