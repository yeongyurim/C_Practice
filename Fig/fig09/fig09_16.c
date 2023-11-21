// fig09_16.c
// Using an inverted scan set
#include <stdio.h>

int main(void) {
    char z[9] = "";

    printf("%s", "Enter a string: ");
    scanf("%9[^aeiou]", z);

    printf("The input was \"%s\"\n", z);
}