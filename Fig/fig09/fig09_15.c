// fig09_15.c
// Using a scan set
#include <stdio.h>

int main(void) {
    char z[9] = "";

    printf("%s", "Enter string: ");
    scanf("%8[aeiou]", z); // search for set of characters

    printf("The input was \"%s\"\n", z);
}