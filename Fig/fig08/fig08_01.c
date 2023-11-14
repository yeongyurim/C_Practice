// fig08_01.c
// Using functions isdigit, isalpha, isalnum, and isxdigit
#include <ctype.h>
#include <stdio.h>

int main(void) {
    printf("%s\n%s%s\n%s%s\n\n", "According to isdigit: ",
        isdigit('8') ? "8 is a " : "8 is not a ", "digit", // 8 is a digit
        isdigit('#') ? "# is a " : "# is not a ", "digit"); // # is not a digit

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to isalpha :", 
        isalpha('A') ? "A is a " : "A is not a ", "letter", // A is a letter
        isalpha('b') ? "b is a " : "b is not a ", "letter", // b is a letter
        isalpha('&') ? "& is a " : "& is not a ", "letter", // & is not a letter
        isalpha('4') ? "4 is a " : "4 is not a ", "letter"); // 4 is not a letter

    printf("%s\n%s%s\n%s%s\n%s%s\n\n", "According to isalnum",
        isalnum('A') ? "A is a " : "A is not a ", "digit or a letter", // A is a digit or a letter
        isalnum('&') ? "& is a " : "& is not a ", "digit or a letter", // & is not a digit or a letter
        isalnum('#') ? "# is a " : "# is not a ", "digit or a letter"); // # is not a digit or a letter

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n", "According to isxdigit:",
        isxdigit('F') ? "F is a " : "F is not a ", "hexadecimal digit", // F is a hexadecimal digit
        isxdigit('J') ? "J is a " : "J is not a ", "hexadecimal digit", // J is not a hexadecimal digit
        isxdigit('7') ? "7 is a " : "7 is not a ", "hexadecimal digit", // 7 is a hexadecimal digit
        isxdigit('$') ? "$ is a " : "$ is not a ", "hexadecimal digit", // % is not a hexadecimal digit
        isxdigit('f') ? "f is a " : "f is not a ", "hexadecimal digit"); // f is a hexadecimal digit
}