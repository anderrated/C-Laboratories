// Andrea A. Laserna
// 2021-07305
// Lab Exercise 3 - LOOPS
// March 24, 2023

#include<stdio.h>

int main(){
int rows, space, i, star;
printf("Enter an integer: ");
scanf("%d",&rows);

//loop to iterate through rows
for(i = 1; i <= rows; i++)
{
    //for loop to put spaces before stars
    for(space = i; space < rows; space++)
    printf(" ");
    //for loop for displaying stars in each row
    for(star = 1; star <= i; star++)
    printf("* ");
    //print ending line after each row
    printf("\n");
}
return 0;
}