//Andrea A. Laserna
//2021-07305
//Lab Exercise 2 - Conditional Statements
//March 16, 2023

#include <stdio.h>

int height, i, j, k;

int main() {
    printf("Enter height of the triangle: ");
    scanf("%d", &height);

    //line
    for (i = 1; i <= height; i++) {
        //spaces
        for (k = i; k < height; k++) {
            printf(" ");
        }
        //stars
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
return 0;
}