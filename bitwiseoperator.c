#include "stdio.h"

int main (void) {
    int a = 10;
    int b = a&a>>1;
    printf("%d",b);
}