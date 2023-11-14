// fig06_02.c
// Initializing the elements of an array with an initializer list.
#include <stdio.h>

// function main begins program execution
int main(void) {
    int n[5] = {32, 27, 64, 18, 95}; // initialize n with initializer list

    printf("%s%8s\n", "Element", "Value");

    // output contents of array n in tabular format
    for (size_t i = 0; i < 5; ++i) {
        printf("%7zu%8d\n", i, n[i]);
    }
}