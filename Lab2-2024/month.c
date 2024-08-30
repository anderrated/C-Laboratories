// Andrea Laserna
// 2021-07305
// Lab Exercise 2 - Conditional Statements
// March 17, 2023

#include <stdio.h>

int month;

int main() {
    printf("Enter a month (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31");
            break;
        case 4: case 6: case 9: case 11:
            printf("30");
            break;
        case 2:
            printf("28 or 29");
            break;
        default:
            printf("That is not an integer or is out of bounds.");
    }

    return 0;
}