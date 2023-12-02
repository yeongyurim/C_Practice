// fig07_probs
// sovling problems
#include <stdio.h>

#define SIZE 10

int main(void){
    float numbers[SIZE] = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5
    , 6.6, 7.7, 8.8, 9.9};
    
    float *nPtr;

    for(int i = 0; i < 10; i++) {
        printf("%.1f ", numbers[i]);
    }

    puts("");
    nPtr = numbers;
    //nPtr = number[0];

    for(int i = 0; i < 10; i++) {
        printf("%.1f ",*(nPtr+i));
    }

    puts("");

    for(int i = 0; i < 10; i++) {
        printf("%.1f ",*(numbers+i));
    }

    puts("");

    for(int i = 0; i < 10; i++) {
        printf("%.1f ", nPtr[i]);
    }

    puts("");

    printf("%1.1f", *(nPtr + 8));

    puts("");
}