// fig08_07.c
// Using functions fgets and putchar
#include <stdio.h>
#define SIZE 80

void reverse(const char * const sPtr);

int main(void) {
    char sentence[SIZE] = "";
    
    puts("Enter a line of text:");
    fgets(sentence, SIZE, stdin); // read a line of text

    printf("\n%s", "The line printed backward is:");
    reverse(sentence);
    puts("");
}

// recursively outputs characters in string in reverse order
void reverse(const char * const sPtr) {
    // if end of the string
    if ('\0' == sPtr[0]) { // base case
        return;
    }
    else {// if not end of the string
        reverse(&sPtr[1]); // recursion step
        putchar(sPtr[0]); // use putchar to display character
    }
}

// char *fgets(char *s, int n, FILE *stream)
// Reads characters from the specified stream into the array s
// until a newline or EOF character is encountered,
// or until n - 1 bytes are read.
// This chapter uses the stream stdin the standard input stream
// to read characters from the keyboard.
// A terminating null character is appended to the array.
// Returns the string that was read into s.
// If a newline is encountered. it's included in the stored string.


// int putchar(int c)
// Prints the character stored in c and retuns ut as an integer.

// int puts(const char *s)
// Prints the string s followed by a newline character.
// Returns a nonzero integer if successful, or EOF if an error occurs.
