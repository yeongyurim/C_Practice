// time_and_rand.c
// determine time.h and rand function

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void) {
    clock_t a = clock();
    time_t second = time(NULL); // long type
    printf("time(NULL)'s result is %ld\n", second); // return the passed time as second after UTC
    printf("Print as formatted sentence ");
    clock_t b = clock();
    clock_t c =  b-a;
    printf("%lu\n", c);
}