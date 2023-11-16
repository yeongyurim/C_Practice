// fig08_11.c
// Using functions strcpy and strncpy
#include <stdio.h>
#include <string.h>
#define SIZE1 25
#define SIZE2 15

int main(void) {
    char x[] = "Happy Birthday to you"; // initialize char aary x
    char y[SIZE1] = ""; // create char array y;
    char z[SIZE2] = ""; // create char array z

    // copy contents of x into y
    printf("%s%s\n%s%s\n",
        "The string in array x is: ", x,
        "The string in array y is: ", strcpy(y, x));

    strncpy(z, x, SIZE2 - 1); // copy first 14 characters of x into z
    z[SIZE2 - 1] = '\0'; // terminate string in z, becase '\0' not copied
    printf("The string in array z is %s\n", z);
}