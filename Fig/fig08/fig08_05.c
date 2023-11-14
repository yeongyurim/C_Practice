// fig08_05.c
// Using function strtol
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *string = "-1234567abc";
    char *remainderPtr = NULL;

    long x = strtol(string, &remainderPtr, 0);

    printf("%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
        "The original string is ", string,
        "The converted value is ", x,
        "The remainder of the original string is ", remainderPtr,
        "the converted value plus 567 is ", x + 567);
}