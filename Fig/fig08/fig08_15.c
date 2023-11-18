// fig08_15.c
// Using function strcspn
// size_t strcspn(const char *s1, const char *s2)
// Determines and returns the length of the initial segment of string s1
// consisting of characters not contained in string s2.
#include <stdio.h>
#include <string.h>

int main(void) {
    // initialize two char pointers
    const char *string1 = "The value is 3.14159";
    const char *string2 = "1234567890";

    printf("string1 = %s\nstring2 = %s\n\n%s\n%s%zu\n", string1, string2,
        "The length of the initial segment of string1",
        "containing no characters from string2 = ",
        strcspn(string1, string2));

    for(int i = 0; i < strcspn(string1, string2); i++){
        printf("%c",string1[i]);
    }
}