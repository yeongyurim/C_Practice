#include <stdio.h>

int main(void) {
    int a = 4, b = 7;
    a = b;
    printf("a=%d",a);

    int num[4] = {6,7,8,9};
    a = (int)num;
    printf("%d",a);
    return 0;
}