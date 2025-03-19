#include <stdio.h>

int main (void) {
    char a [4] = "abc";
    for(int i=0; a[i] != 0; i++){ // 0 이던 NULL 이던 '\0'이건 모두 같은 값을 가리킨다.
        printf("%c", a[i]);
    }
}