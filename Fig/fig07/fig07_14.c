// fig07_14.c
// Using subscripting and pointer notation with arrays.
#include <stdio.h>
#define ARRAY_SIZE 4

int main(void) {
    int b[] = {10, 20, 30, 40}; // create and initialize array b
    int *bPtr = b; // create bPtr and point it to array b

    // output array b using array subscription notation
    puts("Array b printed with:\nArray subscript notation");

    // loop through array b
    for (size_t i = 0; i < ARRAY_SIZE; ++i) {
        printf("b[%zu] = %d\n", i, b[i]);
    }

    // output array b using array name and pointer/offset notation
    puts("\nPointer/offset notation where the pointer is the array name");

    // loop through array b
    for(size_t offset = 0; offset < ARRAY_SIZE; ++offset) {
        printf("*(b + %zu) = %d\n", offset, *(b + offset)); // because the * operator has higher precedence, parentheses are required in this operation
    }

    // output array b using bPtr and array subscript notation
    puts("\nPointer subscript notation");

    // loop through array b
    for (size_t i = 0; i < ARRAY_SIZE; ++i) {
        printf("bPtr[%zu] = %d\n", i, bPtr[i]);
    }

    // output array b using bPtr and pointer/offset notation
    puts("\nPointer/offset notation");

    // loop through array b
    for(size_t offset = 0; offset < ARRAY_SIZE; ++offset) {
        printf("*(bPtr + %zu) = %d\n", offset, *(bPtr + offset));
    }
}