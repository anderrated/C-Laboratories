#include <stdio.h>

int number, sum;

int main() {

    int sum = 0;

    do {
        printf("Enter number: ");
        scanf("%d", &number);
        sum += number;
        printf("Sum: %d\n", sum);
    } while (sum < 100);

    return 0;
}