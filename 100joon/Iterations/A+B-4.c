// 백준 A+B-4
// scanf의 리턴 값에 대한 이해가 필요하다.
// scanf 는 전달받은 값의 개수를 정수로 리턴한다.
// 만약 에러가 발생하거나 EOF를 만나면 -1를 리턴한다.
#include <stdio.h>

int main(void) {
    int a, b = 0;
    while(scanf("%d %d", &a, &b) != -1) {
        printf("%d\n", a+ b);
    }
}