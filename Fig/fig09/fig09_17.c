// fig09_17.c
// Inputting data with a field width
#include <stdio.h>

int main(void) {
    int x = 0;
    int y = 0;

    printf("%s", "Enter a six digit integer: ");
    scanf("%2d%d", &x, &y);
    printf("The integers input were %d and %d\n", x, y);
}