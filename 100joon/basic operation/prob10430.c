// prob10430.c
// testing remainder operation results
#include <stdio.h>

int main(void) {
    int a, b, c; // opeearands
    scanf("%d %d %d",&a, &b, &c);

    printf("%d\n", ( a+b ) % c );
    printf("%d\n", ( ( a%c )+( b%c ) ) % c );
    printf("%d\n", ( a*b ) % c );
    printf("%d\n", ( ( a%c )*( b%c) ) % c );
}