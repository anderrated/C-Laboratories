#include <stdio.h>
//function for sum and average
int main(){
    int x1, x2, x3, x4, x5;

    printf("Enter 5 integers separated by spaces: ");
    scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
    //formula for sum
    int sum=x1+x2+x3+x4+x5;
    //formula for average
    float average=sum/5.0;
    //output
    printf("\nThe sum of the values is %d and the average is %.2f", sum, average);
 
    return 0;
} 