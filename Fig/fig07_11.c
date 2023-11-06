// fig07_11.c
// Putting values into an array, sorting the values into
// ascending order and printing the resulting array.
#include <stdio.h>
#define SIZE 10

void bubbleSort(int * const array, size_t size); // prototype

int main(void) {
    //initialize array a
    int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 17 };

    puts("Data items in original order");

    // loop through array a
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }

    bubbleSort(a, SIZE) // sort the array

    puts("\nData items in ascending order");

    // loop through array a
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }

    puts("");
}

// sort an array of integers using bubble sort algorithm
void bubbleSort(int * const array, size_t size) {
    void swap(int *element1Ptr, int *element2Ptr); // prototype

    // loop to control passes
    for (int pass = 0; pass < size)
}