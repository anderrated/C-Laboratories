//Andrea A. Laserna
//2021-07305
//Lab Exercise 2 - Conditional Statements
//March 16, 2023

#include <stdio.h>

int main(){
    float weight, height, bmi;

    printf ("Enter weight (kg): ");
    scanf ("%f", &weight);

    printf ("Enter height (m): ");
    scanf ("%f", &height);

    bmi=weight/(height*height);

    if (bmi<18.5){
        printf("You are underweight.");
    }
    else if (bmi<25){
        printf("You are normal.");
    }
    else if (bmi<30){
        printf("You are overweight.");
    }
    else{
        printf("You are obese.");
    }
    return 0;
}