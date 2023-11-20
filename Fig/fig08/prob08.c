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
    fgets(s1,5,stdin); 
    puts(s1);
    ptr = strrchr(s1,c); // assign ptr the location of the last occurrence of s2 in s1.
    putchar(c);
    printf("%c%s%s",c,isalpha(c)? " is a ":" is not a","a letter\n");
    c = getchar();
    ptr = strstr(s1, s2);
    printf("%c%s%s",c,ispunct(c)? " is a ":" is not a ","printing character\n");
    sscanf("1.27 10.3 9.432","%f %f %f", &d, &e, &f);
    printf("%f %f %f\n",d, e, f);
    memccpy(s1,s2);
}