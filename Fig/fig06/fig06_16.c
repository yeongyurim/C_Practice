// fig06_16.c
// Initializing multidimensional arrays.
#include <stdio.h>

void printArray(int a[][3]); // function prototype

// function main begins progoram execution
int main(void) {
    int array1[2][3] = {{1,2,3},{4,5,6}};
    puts("Values in array1 by row are");
    printArray(array1);

    int array2[2][3] = {{1,2,3}, {4,5}};
    puts("Values in array2 by row are:");
    printArray(array2);

    int array3[2][3] = {{1,2}, {4,}};
    puts("Values in array3 by row are:");
    printArray(array3);
}

// function to output array with two rows and three columns
void printArray(int a[][3]) {
    // loop through rows
    for (size_t i = 0; i <= 1; ++i) {
        // loop through values
        for (size_t j =0; j <= 2; ++j) {
            printf("%d ", a[i][j]);
        }

        printf("\n"); // start new line of output
    }
}