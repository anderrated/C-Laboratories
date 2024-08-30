//Andrea A. Laserna
//2021-07305
//Lab Exercise 2 - Conditional Statements
//March 16, 2023

#include <stdio.h>

int main(){
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    (number % 2 == 0)? printf("%d is even.", number) : printf("%d is odd.", number);
    
    return 0;
}