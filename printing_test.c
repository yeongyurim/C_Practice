// printing_test.c
// mainly test difference between puts and printf

#include <stdio.h>

int main (void){
    char myStr[] = "Hello%d\n";

    printf(myStr); // <- Wrong because of % character in myStr
    puts(myStr); // more efficient way to print String contains % character
    
    printf("%s",myStr); // equivalent to the previous 
    puts("");

    printf("printf doesn't automatically alter the line after printing\n");
    puts("but puts does");
    /* if string which will be printed has escape sequence like \n
    it activates while be printing */
}