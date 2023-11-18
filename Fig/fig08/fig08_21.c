// fig08_21.c
// Using function memcpy
// void *memcpy(void *s1, const void *s2, size_t n)
// Copies n bytes from the object pointed to by s2 into s2 
// into the object pointed to by s1, then returns a pointer to the resulting object.
#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[17] = "";
    char s2[] = "Copy this string";

    memcpy(s1, s2, 17); // 17 so we copy s2's terminating \0
    puts("After s2 is copied into s1 with memcpy, s1 contains:");
    puts(s1);
}
// Its result is undefined if the two objects overlap in memory
// that is, they're parts of the same object