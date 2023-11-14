// fig08_02.c
// Using funcitons islower, isupper, tolower and toupper
#include <ctype.h>
#include <stdio.h>

int main(void) {
    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to islower:",
        islower('p') ? "p is a " : "p is not a ", "lowercase letter", // p is a lowercase letter
        islower('P') ? "P is a " : "P is not a ", "lowercase letter", // P is not a lowercase letter
        islower('S') ? "S is a " : "S is not a ", "lowercase letter", // S is not a lowercase letter
        islower('I') ? "I is a " : "I is not a ", "lowercase letter"); // I is not a lowercase letter
    
    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to isupper:",
        isupper('D') ? "D is a " : "D is not a ", "uppercase letter", // D is a uppercase letter
        isupper('d') ? "d is a " : "d is not a ", "uppercase letter", // d is not a uppercase letter
        isupper('8') ? "8 is a " : "8 is not a ", "uppercase letter", // 8 is not a uppercase letter
        isupper('$') ? "$ is a " : "$ is not a ", "uppercase letter"); // % is not a uppercase letter

    printf("%s%c\n%s%c\n%s%c\n%s%c\n",
        "u converted to uppercase is ", toupper('u'), // u -> U
        "7 converted to uppercase is ", toupper('7'), // 7 -> 7
        "$ converted to uppercase is ", toupper('$'), // $ -> $
        "L converted to uppercase is ", toupper('L')); // L -> L
}