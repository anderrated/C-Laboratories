#include <stdio.h>

int grade;

int main() {
    printf("Enter your grade: ");
    scanf("%d", &grade);

    if (grade >= 0 && grade <= 49) {
        printf("Equivalent: 5.0");
    }
    else if (grade >= 50 && grade <= 59) {
        printf("Equivalent: 4.0");
    }
    else if (grade >= 60 && grade <= 62) {
        printf("Equivalent: 3.0");
    }
    else if (grade >= 63 && grade <= 65) {
        printf("Equivalent: 2.75");
    }
    else if (grade >= 66 && grade <= 69) {
        printf("Equivalent: 2.5");
    }
    else if (grade >= 70 && grade <= 74) {
        printf("Equivalent: 2.25");
    }
    else if (grade >= 75 && grade <= 79) {
        printf("Equivalent: 2.0");
    }
    else if (grade >= 80 && grade <= 84) {
        printf("Equivalent: 1.75");
    }
    else if (grade >= 85 && grade <= 89) {
        printf("Equivalent: 1.5");
    }
    else if (grade >= 90 && grade <= 94) {
        printf("Equivalent: 1.25");
    }
    else if (grade >= 95 && grade <=100) {
        printf("Equivalent: 1.0");
    }
    else {
        printf("Grades out of bounds.");
    }
}