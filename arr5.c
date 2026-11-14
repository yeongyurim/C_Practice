#include <stdio.h>

int main(void) {
    int arr1[5];
    int arr2[5];
    int i;

    // do-while문으로 arr1 초기화 (10, 20, 30, 40, 50)
    i = 0;
    do {
        arr1[i] = (i + 1) * 10;
        i++;
    } while (i < 5);

    // for문으로 arr1을 arr2에 복사
    for (i = 0; i < 5; i++) {
        arr2[i] = arr1[i];
    }

    // 결과 출력
    for (i = 0; i < 5; i++) {
        printf("arr1[%d]=%d  arr2[%d]=%d\n", i, arr1[i], i, arr2[i]);
    }

    return 0;
}
