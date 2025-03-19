#include <stdio.h>

int main (void)
{
    short a;
    void *p;
    p = (void*) &a;
    printf("%lu");
} 