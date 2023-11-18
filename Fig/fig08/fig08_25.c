// fig08_25.c
// Using function memset
// void *memset(void *s, int c, size_t n)
// Copies c (converted to unsinged char) into the first n bytes of the object
// pointed to by s, then returns a pointer to result.
#include <stdio.h>
#include <string.h>

int main(void) {
    char string1[15] = "88888888888888";

    printf("string1 = %s\n", string1);
    printf("string1 after memset = %s\n", (char *) memset(string1, 'b', 7));
}