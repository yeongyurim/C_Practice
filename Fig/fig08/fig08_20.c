// fig08_20.c
// Using function strtok
// char *strtok(char *s1, const char *s2)
// A sequence of calls to strtok breaks string s1 into tokens
// separated by characters contained in string2.
// The first call uses s1 as the first argument.
// Subsequent calls to continue tokenizing the same string
// require NULL as the first argument.
// Each call returns a pointer to  the current token.
// If there are no more tokens, strtok returns NULL.

#include <stdio.h>
#include <string.h>

int main(void) {
    char string[] = "This is a sentence with 7 tokens";

    printf("The string to be tokenized is:\n%s\n\n", string);
    puts("The tokens are:");

    char *tokenPtr = strtok(string, " "); // begin tokenizing sentence

    // continue tokenizing sentence until tokenPtr becomes NULL
    while (tokenPtr != NULL) {
        printf("%s\n", tokenPtr);
        tokenPtr = strtok(NULL, " "); // get next token
    }
}