#include <stdio.h>

int num1, num2, num3, num4, num5;

int main() {
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    int sum = num1 + num2 + num3 + num4 + num5;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f", (float)sum/5);

    return 0;
}