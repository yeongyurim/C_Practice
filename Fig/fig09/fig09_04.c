// fig09_04.c
// Using the p and % conversion specifiers
#include <stdio.h>

int main(void) {
    int x = 12345;
    int *ptr = &x;

    printf("The value of ptr is %p\n", ptr);
    printf("The address of x is %p\n\n", &x);

    printf("Printing a %% in a format control string\n");
}