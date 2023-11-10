// fig07_15.c
// Copying a string using array notation and pointer notation.
#include <stdio.h>
#define SIZE 10

void copy1(char* const s1, const char * const s2); // prototype
void copy2(char* s1, const char *s2); // prototype

int main(void) {
    char string1[SIZE]; // create array string1
    char *string2 = "Hello"; // create an array containg a string

    copy1(string1, string2);
    printf("string1 =  %s\n", string1);

    char string3[SIZE]; // create array string3
    char string4[] = "Good Bye"; // create an array containing a string

    copy2(string3, string4);
    printf()
}