// fig06_10.c
// Array name is the same as the address of the array's first element.
#include <stdio.h>

// function main begins program execution
int main (void) {
    char array[5] = ""; // define an array of size 5

    printf("    array = %p\n&array[0] = %p\n    &array = %p\n",
        array, &array[0], &array);
} // Array name is the same as the address of the array's first element.
/* Passing arrays by reference makes sense for performance reasons.
If arrays were passed by value, a copy of each element would consume storage for the copies of the arrays.
It's possible to pass an array by value*/