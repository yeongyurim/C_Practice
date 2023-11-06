// prob2588.c
// multiplication 

#include <stdio.h>

int main(void){
    int op1, op2;
    scanf("%d %d", &op1, &op2);

    int dO1 = op2 % 10;
    int dO10 = op2 % 100 / 10;
    int dO100 = op2 / 100;

    int prod1 = op1 * dO1;
    int prod10 = op1 * dO10;
    int prod100 = op1 * dO100;

    printf("%d\n", prod1 );
    printf("%d\n", prod10 );
    printf("%d\n", prod100 );
    printf("%d\n", prod100 * 100 + prod10 * 10 + prod1 );
}