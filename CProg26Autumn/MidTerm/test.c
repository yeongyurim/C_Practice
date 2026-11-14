#define _CRT_SECURE_NO_WARNINGS // MSVC 전용
#include <stdio.h>
#include <string.h> // str 관련 메서드는 이 헤더파일을 추가해야 함

int main (void) {
    char a [6] = "apple";
    const char b [6] = {'a','p','p','l','e','\0'}; // 일부만 초기화 하면 남은 값은 자동으로 0
    char c [6];
    char d [6];
    
    strcpy(c,b);
    strncpy(d,c,3);
    d[3] = '\0';

    // strcpy_s(d,6,c); MSVC 전용함수

    //printf("%s\n", a); 
    //printf("%s\n",b);
    //printf("%s\n",c);
    //printf("%s",d);
    a[0] = 'A';

    
    const char * bp1 = b; // 가리키는 주소가 상수
    char * const ap1 = &a[1]; // 주소 자체가 상수
    
    *ap1 = 'B'; // 내용은 수정 가능함

    // printf("%s\n", ap1);

    int num [3][4] = {{1, 2, 3, 4},{2,2,8}};
    int *pnum1 [4] = {num, &num[1], &num[2], &num[3]};
    int (*pnum2) [4] = num;

    printf("%d\n", **pnum2);
    printf("%d\n", (*(pnum2+1)+1)[2]);
    /*
    for (int i=0; i<sizeof(num)/sizeof(int); i++){
        printf("%d\n",(*pnum1)[i]); // 인덱스 연산자가 포인터 연산자보다 우선순위가 높음
    }
    */

    return 0;
}