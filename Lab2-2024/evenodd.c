#include <stdio.h>

int number;

int main() {
    printf("Enter a number: ");
    scanf("%d", &number);

    (number%2 == 0) ? printf("The number is even.") : printf("The number is odd.");

    return 0;
}