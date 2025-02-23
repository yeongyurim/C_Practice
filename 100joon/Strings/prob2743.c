#include <stdio.h>
#include <string.h>

int main (void)
{
    char word[100];
    scanf("%s", word);

    printf("%lu", strlen(word));
}