// fig08_26.c
// Using function strerror
// Maps errornum to a full text string in a compiler and locale-specific
// manner and returns the string. Error numbers are defined in errno.h.

#include <stdio.h>
#include <string.h>

int main(void) {
    printf("%s\n", strerror(2));
}