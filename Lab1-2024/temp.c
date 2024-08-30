#include <stdio.h>

float fahrenheit, celcius;

int main() {
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celcius = ((fahrenheit - 32) * 5)/9;

    printf("Temperature in Celcius: %.2f", celcius);

    return 0;
}