// fig09_14.c
// Reading characters and strings
#include <stdio.h>

int main(void) {
    char x = '\0';
    char y[9] = "";

    printf("%s", "Enter a string: ");
    scanf("%c%8s", &x, y);

    printf("The input was '%c' and \"%s\"\n", x, y);
}