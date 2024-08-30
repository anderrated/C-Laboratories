#include <stdio.h>

int num1, num2;

int main() {
    printf("Enter 2 integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);
    printf("Quotient: %.2f\n", (double)num1 / (double)num2);
    printf("Remainder: %d", num1 % num2);

    return 0;
}