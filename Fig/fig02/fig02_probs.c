// fig02_probs.c
// answers of questions of cp2
#include <stdio.h>

int main(void) {
    // Calculate the product three integers
    printf("input 3 integers(separte it by space) : ");
    int op1, op2, op3;
    scanf("%d %d %d", &op1, &op2, &op3);
    int result = op1 * op2 * op3;
    printf("The product is %d\n", result);
}