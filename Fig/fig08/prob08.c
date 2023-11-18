// prob08.c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char c = 'a';
    int x, y, z;
    float d, e, f;
    char *ptr;
    char s1[100], s2[100];

    c = toupper(c);
    //printf("%c", toupper(c));
    printf("%s%s%s\n", "variable c", isdigit(c)? " is a " : " is not a ", "digit"); // determine whether c is a digit
    printf("%s%s%s\n", "variable c", iscntrl(c)? " is a " : " is not a ", "control character"); // determine whether c is a control character
    
}