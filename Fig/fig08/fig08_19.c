// fig08_19.c
// Using function strstr
// char *strstr(const char *s1, const char *s2)
// Locates the last occurrence in string s1 of string s2.
// If the string is found, strstr returns a pointer 
// to the string in s1.
// Otherwise, it returns NULL.
#include <stdio.h>
#include <string.h>

int main(void) {
    const char *string1 = "abcdefabcdef";
    const char *string2 = "def"; // string to search for

    printf("string1 = %s\nstring2 = %s\n\n%s\n%s%s\n", string1, string2,
        "The remainder of string1 beginning with the",
        "first occurrernce of string2 is: ", strstr(string1, string2));
}