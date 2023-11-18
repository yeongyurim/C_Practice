// fig08_22.c
// Using function memmove
// void *memmove(void *s1, const void *s2, size_t n)
// Copies n byte from the object pointed to by s2
// into the object pointed to by s1. The copy is performed
// as if the bytes were first copied from the object
// pointed  to by s2 into a temporary array and 
// the temporaray array into the object pointed by s1.
// A pointer to the resulting object is returned 
#include <stdio.h>
#include <string.h>

int main(void) {
    char x[] = "Home Sweet Home"; // initialize char array x

    printf("The string in array x before memmove is : %s\n", x);
    printf("The string in array x after memmove is: %s\n",
        (char *) memmove(x, &x[5], 10));
}

// This allows bytes from one part of a string(or block of memory) 
// to be copied into another part of the same string