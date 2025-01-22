#include <stdio.h>

void quiz(){
    int sizeInt = 10;
    int* sizePointer = &sizeInt;
    printf("sizeof(int) : %d \nsizeof(int*) %d\n",sizeof(sizeInt),sizeof(sizePointer));
};