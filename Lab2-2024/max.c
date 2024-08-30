// Andrea Laserna
// 2021-07305
// Lab Exercise 2 - Conditional Statements
// March 17, 2023

#include <stdio.h>

int num1, num2, num3;

int main() {
    printf("Enter 3 integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2) {
        if (num1 > num3) {
            printf("The maximum number is %d", num1);
        } else {
            printf("The maximum number is %d", num3);
        }
    } else {
        if (num2 > num3) {
            printf("The maximum number is %d", num2);
        } else { 
            printf("The maximum number is %d", num3);
        }
    }

    return 0;
}