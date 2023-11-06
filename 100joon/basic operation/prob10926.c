// prob7.c
// concept of trigraph sequences

#include <stdio.h>

int main(void) {
    char input[50];
    scanf("%s", input);
    printf("%s\?\?!",input); // trigraph ignored ??! -> \?\?!
}