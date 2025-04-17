#include <stdio.h>

int sum(int* arr, int left) {
    if(left == 0)  // 기저 사례 (배열 크기가 0이면 합은 0)
        return 0;
    return arr[left - 1] + sum(arr, left - 1);
}

int main(void) {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int size = sizeof(a) / sizeof(a[0]);  // size = 9
    printf("%d", sum(a, size));  // 1부터 9까지의 합 = 45
    return 0;
}
