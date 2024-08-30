//Andrea A. Laserna
//2021-07305
//Lab Exercise 2 - Conditional Statements
//March 16, 2023

#include <stdio.h>

int main(){
    float grade;

    printf("Enter your grade(out of 100): ");
    scanf("%f", &grade);
    
    while (grade < 0 || grade > 100) {
        printf("Invalid grade. Please enter a grade between 0 and 100: ");
        scanf("%f", &grade);
    }


    if (grade>0 && grade<50){
        printf("Your grade is 5.0");
    }
    else if(grade>49 && grade<60){
        printf("Your grade is 4.0");
    }
    else if(grade>59 && grade<63){
        printf("Your grade is 3.0");
    }
    else if(grade>62 && grade<66){
        printf("Your grade is 2.75");
    }
    else if(grade>65 && grade<70){
        printf("Your grade is 2.5");
    }
    else if(grade>69 && grade<75){
        printf("Your grade is 2.25");
    }
    else if(grade>74 && grade<80){
        printf("Your grade is 2.0");
    }
    else if(grade>79 && grade<85){
        printf("Your grade is 1.75");
    }
    else if(grade>84 && grade<90){
        printf("Your grade is 1.5");
    }
    else if(grade>89 && grade<95){
        printf("Your grade is 1.25");
    }
    else if(grade>94){
        printf("Your grade is 1.0");
    }
    return 0;
}