// fig08_14.c
// Using function strchr
// char *strchr(const char *s, int c)
// Locates the first occurrence of character c in string s.
// If c is found, strchr returns a pointer to c in s.
// Otherwise, a NULL pointer is returned.

#include <stdio.h>
#include <string.h>

int main(void) {
    const char *string = "This is a test"; // initialize char pointer
    char character1 = 'a';
    char character2 = 'z';

    // if character1 was found in string
    if (strchr(string, character1) != NULL) {// can remove "!= NULL"
        printf("\'%c\' was found in \"%s\".\n", character1, string);
    }
    else { // if character1 was not found
        printf("\'%c\' was not found in \"%s\".\n", character1, string);
    }

    // if character2 was found in string
    if (strchr(string, character2) != NULL) {// can remove "!= NULL"
        printf("\'%c\' was found in \"%s\".\n", character2, string);
    }
    else { // if character2 was not found
        printf("\'%c\' was not found in \"%s\".\n", character2, string);
    }
}