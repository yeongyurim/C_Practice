// fig09_01.c
// Using the integer conversion specifiers
#include <stdio.h>

int main(void) {
    printf("%d\n", 455);
    printf("%i\n", 455); // i same as d in printf
    printf("%d\n", +455); // plus sign does not print
    printf("%d\n", -455); // minus sign prints
    printf("%hd\n", 32000); // print as type short
    printf("%ld\n", 2000000000L); // print as type long
    printf("%o\n", 455); // octal
    printf("%u\n", 455);
    printf("%u\n", -455);
    printf("%x\n", 455); // hexadecimal with lowercase letters
    printf("%X\n", 455); // hexadecimal with uppercase letters
}