//Andrea A. Laserna
//2021-07305
//Lab Exercise 2 - Conditional Statements
//March 16, 2023

#include <stdio.h>

int main(){
    int int1, int2, int3;

    printf("Enter 3 integers separated by spaces: ");
    scanf("%d %d %d", &int1, &int2, &int3);

    if (int1>int2){
        if (int1>int3){
            printf("The maximum number is %d.", int1);
        }
        else{
            printf("The maximum number is %d.", int3);
        }
    }
    else{
        if (int2>int3){
            printf("The maximum number is %d.", int2);
        }
        else{
            printf("The maximum number is %d.", int3);
        }
    }

    //even or odd
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    (number % 2 == 0)? printf("%d is even.", number) : printf("%d is odd.", number);

    
    
    return 0;
}