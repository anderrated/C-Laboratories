// Andrea A. Laserna
// 2021-07305
// Lab Exercise 3 - LOOPS
// March 24, 2023

#include <stdio.h>

int main(){
    int i, integer=0, sum=0;

    do{
        printf("Enter an integer: ");
        scanf("%d", &integer);
        
        //if the integer is greater than or equal to 100, print statement and exit the loop
        if (integer>=100){
            printf("This integer is already greater than or equal to 100.");
            break;
        }
        else{
            //if the integer is less than 100, add it to the sum variable
            sum+=integer;
        }//continue the loop if the sum is less than 100
    }while (sum<100);

        return 0;
    }


