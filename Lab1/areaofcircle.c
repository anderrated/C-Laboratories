#include <stdio.h>
#define PI 3.14159
//function for area of the circle
int main(){
    //defining the diameter
    float d;

    printf("Enter the diameter: ");
    scanf("%f", &d);
    //formula for area of a circle
    float circle=PI*(d/2)*(d/2); 
    //output
    printf("\nThe area of the circle is: %.2f", circle);

    return 0;
}   