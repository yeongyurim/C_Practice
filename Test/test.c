#include <stdio.h>

int main (void)
{
    unsigned short b = -10;
    short num1 = 32767;
    long double f1 = 1;
    num1 = num1 + 2; // 2의 보수법에 따른 Overflow
    char ch;
    scanf(" %c", &ch); // 연속적을 scanf를 받을 때는 개행문자가 %c에 받아질 수 있으므로 공백 한칸과 char형을 받아줘야 함

    printf("Num1 = %lu\n", sizeof(long double));
}