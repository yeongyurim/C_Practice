#include <stdio.h>

int main() {
    int schoolID = 202313028;
    int CODE = ( (schoolID % 10000) * 3897 + (schoolID / 100000)*(schoolID / 100000) ) % 10000;
    printf("당신의 나이는 %d살이군요!\n", CODE);
    return 0;
}