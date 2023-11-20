// fig08_10.c
// Using function scanf
#include <stdio.h>

int main(void) {
    char s[] = "31298 87.375";
    int x = 0;
    double y = 0;

    sscanf(s, "%d%lf", &x, &y);
    puts("The values stored in character array s are:");
    printf("integer:%6d\ndouble:%8.3f\n", x, y);
}

// int sscanf(char *s, const char *format,)
// equivalent to scanf, but the input is read from the array s
// rather than from the keyboard.
// Returns the number of items
// successfully read by the function, or EOF if an error occurs.
