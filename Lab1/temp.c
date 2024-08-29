#include <stdio.h>
//temperature conversion function
int main(){
    float f;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    //fahrenheit to celsius formula
    float celsius=((f-32)*5)/9;
  
    printf("\nThe temperature in Celsius is %.2f", celsius);
 
    return 0;
} 