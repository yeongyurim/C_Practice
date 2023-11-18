// fig08_24.c
// Using function memchr
// void *memchr(const void *s, int c, size_t n)
// Locates the first occurrence of c (converted to unsigned char) in the first
// n bytes of the object pointed to by s.
// If c is found, memchr returns a pointer to c in the object
// Otherwise, it returns NULL.
#include <stdio.h>
#include <string.h>

int main(void) {
    const char *s = "This is a string";

    printf("The remainder of s after character 'r' is found is \"%s\"\n",
        (char *) memchr(s, 'r', 16));
}