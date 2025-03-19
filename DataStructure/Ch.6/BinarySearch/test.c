#include <stdio.h> // 전처리지시자
#define MAX 100
#define MSG "안녕하세용"
// 이미 stdio 헤더 파일에 NULL이 define 되어 있음

int main (void)
{
    unsigned int a = 65; // 10진수
    unsigned int b = 010; // 8진수
    unsigned int c = 0x10; // 16진수
    int d = MAX;
    
    char ch;
    printf("%c %c %c %d %s", a, b, c, d, MSG);
    return 0;
}