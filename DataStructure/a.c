#include <stdio.h>

typedef struct {
    int a , b, c;
}ab;

int main (void) {
    char a = '0';
    int b = 0;

    printf(a == b ? "true" : "false");
}