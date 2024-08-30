#include <stdio.h>

char character;

int main() {
    printf("Enter character: ");
    scanf("%c", &character);

    printf("ASCII Value: %d", (int)character);
}