#include <stdio.h>

// 배열을 출력하는 함수
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[], int size) {
    if (size < 1)
        return;
    else {
        int minIndex = 0;
        for (int i=0; i<size; i++)
            if(arr[i] < arr[minIndex]) 
                minIndex=i;
        if (minIndex != 0) {
            int temp = arr[0];
            arr[0] = arr[minIndex];
            arr[minIndex] = temp;
        }
        selectionSort(&arr[1], size-1);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11, 20, 35, 4, 90, 50, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("정렬 전 배열: ");
    printArray(arr, size);

    selectionSort(arr, size);

    printf("정렬 후 배열: ");
    printArray(arr, size);

    return 0;
}
