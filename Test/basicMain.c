#include <stdio.h>

int main(void) {
    int a = 3;
    for(int i = 0; i< 3; i++){
        a <<= 1;
        printf("%d\n", a);
    }
}