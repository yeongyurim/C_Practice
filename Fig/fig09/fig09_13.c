// fig09_13.c
// Reading input with floating-point conversion specifiers
#include <stdio.h>

int main(void) {
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    puts("Enter three floating-point numbers");
    scanf("%le%lf%lg", &a, &b, &c);

    puts("\nUser input displayed in plain floating-pint notation:");
    printf("%f\n%f\n%f\n", a, b, c);
}