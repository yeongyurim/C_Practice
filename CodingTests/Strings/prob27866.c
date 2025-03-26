/*
문자열 입력받기

- 문자열을 입력받기 위해서는 char형 배열을 선언해야 한다.
- 문자열은 서식문자로 %s를 사용한다.
- 문자열의 맨 뒤에는 null 문자가 들어간다.
*/

#include <stdio.h>
#include <string.h>

int main (void)
{
    char word[1000];
    int i = 0;
    scanf("%s %d", word, &i);
    
    printf("%c", word[i-1]);
    return 0;
}