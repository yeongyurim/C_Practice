// fig08_23.c
// Using function memcmp
// int memcmp(const void *s1, const void *s2, size_t n)
// Compares the first n bytes of the objects pointed to by s1 and s2.
// The function returns 0, less than 0 or greater than 0 if s1 is equal to,
// less than or greater than s2.
#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[] = "ABCDEFG";
    char s2[] = "ABCDXYZ";

    printf("s1 = %s\ns2 = %s\n\n%s%2d\n%s%2d\n%s%2d\n", s1, s2,
        "memcmp(s1, s2, 4) = ", memcmp(s1, s2, 4),
        "memcmp(s1, s2, 7) = ", memcmp(s1, s2, 7),
        "memcmp(s2, s1, 7) = ", memcmp(s1, s2, 7));

}