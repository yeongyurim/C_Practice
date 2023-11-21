// fig09_12.c
// Reading input with integer conversion specifiers
#include <stdio.h>

int main(void) {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int g = 0;

    puts("Enter seven integers: ");
    scanf("%d%i%i%i%o%u%x", &a, &b, &c, &d, &e, &f, &g);

    puts("\nThe input displayed as decimal integers is:");
    printf("%d %d %d %d %d %d %d", a, b, c, d, e, f, g);
}