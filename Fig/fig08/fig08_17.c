// fig08_17.c
// Using function strrchr
// char *strchr(const char *s, int c)
// Locates the last occurrence of c in string s,
// If a c is found, strrchr returns a pointer to c in string s,
// Otherwise, it returns NULL.
#include <stdio.h>
#include <string.h>

int main(void) {
    const char *s1 = "A zoo has many animals including zebras";
    int c = 'z'; // character to search for

    printf("%s '%c' %s\n\"%s\"\n",
        "Remainder of s1 beginning with the last occurrence of character",
        c, "is:", strrchr(s1, c));
}