// fig09_10.c
// Using the #flag with conversion specifiers
// o, x, X and any floating-point specifier
#include <stdio.h>

int main(void) {
    int c = 1427; // initialize c
    printf("%#o\n", c); // print decimal into octal
    printf("%#x\n", c); // print decimal into hex
    printf("%#X\n", c); // print decimal into hex but uppercase

    double p = 1427.0; // initialize p
    printf("\n%g\n", p); 
    printf("%#g\n", p);
}