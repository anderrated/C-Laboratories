#include <stdio.h>
//function for the calculator
int main(){
    int a, b;

	printf("Enter 2 integers separed by a space: ");
	scanf("%d %d", &a, &b);
	//displays the sum
	printf("\nThe sum of %d and %d = %d", a, b, a+b);
	//displays the difference
	printf("\nThe difference of %d and %d = %d", a, b, a-b);
	//displays the product
	printf("\nThe product of %d and %d = %d", a, b, a*b);
	//displays the quotient
	printf("\nThe quotient of %d and %d = %.2f", a, b, (float)a/b);
	//displays the remainder
	printf("\nThe remainder of %d divided by %d is %d", a, b, a%b);

	return 0;
}