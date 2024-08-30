#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

float diameter;
float area;

int main() {
    printf("Enter diameter: ");
    scanf("%f", &diameter);

    area = PI * (diameter/2) * (diameter/2);
    printf("Area: %.2f", area);
    return 0;
}