#include <stdio.h>

int main (void) {
    int CODE = ((202313028 % 10000) * 3897 + (202313028/100000)*(202313028/100000))%10000;
    printf("%d",CODE);
}