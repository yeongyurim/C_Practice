// fig08_17.c
// Using function strpbrk
// char *strpbrk(const char *s1, const char *s2)
// Locates the first occurrence in string s1 of any character in string s2.
// If a character from s2 is found,
// strpbrk returns a pointer to that character in s1.
// Otherwise, it returns NULL.
#include <stdio.h>
#include <string.h>

int main(void) {
    const char *string1 = "This is a test";
    const char *string2 = "beware";

    printf("%s\"%s\"\n'%c'%s \"%s\"\n",
        "Of the character in ", string2, *strpbrk(string1, string2),
        " appears earliest in ", string1);
}