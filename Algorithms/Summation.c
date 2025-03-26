#include <stdio.h>

int sum(int* arr, int left) {
    --left;
    if(left < 1)
        return arr[left];
    else
        return (arr[left] + sum(arr,left));
}
int main(void) {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(a) / sizeof(a[0]);
    printf("%d",sum(a,size));

}