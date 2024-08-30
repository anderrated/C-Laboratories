#include <stdio.h>
#include <math.h>

float weight, height, bmi;

int main() {
    printf("Enter your weight: ");
    scanf("%f", &weight);

    printf("Enter your height: ");
    scanf("%f", &height);

    bmi = weight / pow(height, 2);
    printf("Your BMI: %.2f\n", bmi);

    (bmi < 18.5)? printf("Underweight") : (bmi >= 18.5 && bmi < 25)? printf("Normal") : (bmi >= 25 && bmi < 30)? printf("Overweight") : printf("Obese");

    return 0;
}