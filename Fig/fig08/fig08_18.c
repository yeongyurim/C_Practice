// fig08_18.c
// Using function strspn
// size_t strspn(const char *s1, const char *s2)
// Determines and returns the length of the initial segment
// of string s1 consisting only of characters contained in string2
#include <stdio.h>
#include <string.h>

int main(void) {
    const char *string1 = "The value is 3.14159";
    const char *string2 = "aehi lsTuv";

    printf("string1 = %s\nstring2 = %s\n\n%s\n%s%zu\n", string1, string2,
        "The length of the initial segment of string1",
        "containing only characters from string2 = ",
        strspn(string1, string2));
}