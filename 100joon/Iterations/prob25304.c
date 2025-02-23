// prob25304.c
// receipt
#include <stdio.h>

int main (void){
    int amount ,sum, c;
    scanf("%d %d", &amount, &c);
    sum = 0; // if you don't initialize value it may contain garbage value

    for (int i = 0; i < c; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        sum += a * b;
    }
    
    if(amount == sum)
        puts("Yes");
    else
        puts("No");
}