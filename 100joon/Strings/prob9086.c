#include <stdio.h>
#include <string.h>

#define MAX_CASES 100  // 최대 테스트 케이스 개수
#define MAX_LENGTH 1000  // 문자열 최대 길이 (널 문자 포함)

int main (void)
{
    int t;  // 테스트 케이스 개수
    char strings[MAX_CASES][MAX_LENGTH];  // 문자열 저장 공간

    // 테스트 케이스 개수 입력
    scanf("%d", &t);

    // 개행 문자 소비 (버퍼 비우기)
    getchar();

    // 문자열 입력 받기
    for (int i = 0; i < t; i++) {
        fgets(strings[i], MAX_LENGTH, stdin);

        // 개행 문자 제거 (선택사항)
        if (strings[i][strlen(strings[i]) - 1] == '\n') {
            strings[i][strlen(strings[i]) - 1] = '\0';
        }
    }

    // 입력된 문자열 출력 (확인용)
    for (int i = 0; i < t; i++) {
        for (int j=0; strings[i][j] != '\0'; j++) {
            if(strings[i][j+1] == '\0')
                printf("%c%c\n", strings[i][0], strings[i][j]);
        }
    }

    return 0;
}