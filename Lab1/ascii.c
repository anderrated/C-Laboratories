#include <stdio.h>
//function for ascii conversion
int main(){
    char c;

    printf("Enter character: ");
    scanf("%c", &c);
    //%c represents the inputted character and %d represents its integer value
    printf("\nThe ASCII value of %c is %d", c, c);
 
    return 0;
} 