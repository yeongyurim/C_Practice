// pointerTest.c
// testing pointer
#include <stdio.h>
#include <stdlib.h>

// prototypes
void function(int* compare(int a, int b));
int* function1(int a, int b);

int main(void) {
    int a = 3;
    int *b = &a;

    printf("Directly reference :%d\nIndirectily reference : %d\n", a, *b);
    *b = 4;
    puts("");
    puts("After reassign");
    puts("");
    printf("Directly reference :%d\nIndirectily reference : %d\n", a, *b);

    int A[] = {2,3,4,5};
    int *B = A;

    function(function1);
}

void function(int* compare(int a, int b)){
    int* a = compare(10,0);
    printf("%d\n", *a);
    free(a);
}

int* function1(int a, int b){
    int * p = malloc(sizeof(int));
    *p = a > b ? 1 : 0;
    return p;
}