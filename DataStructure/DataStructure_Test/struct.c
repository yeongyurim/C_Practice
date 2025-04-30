#include <stdio.h>

struct person {
    char name [10];
    int age;
    int wage;
};

typedef struct {
    float real;
    float imaginary;
} complex;

complex add(complex a, complex b) {
    complex system;
    system.real = a.real + b.real;
    system.imaginary = a.imaginary + b.imaginary;
    return system;
}
int main (void) {
    /*
    struct person a = {"연규림",27,70000000};
    complex c = {2,3};
    printf("%f",c.real);
    printf("%d",a.wage);
    return 0;*/

    unsigned char d = 300;
    printf("%d\n", d);
}