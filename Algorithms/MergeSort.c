#include <stdio.h>

void Merge(int *A, int left, int mid, int right) {
    int B[10];
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right) {
        if (A[i] <= A[j]) {
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }

    while (i <= mid) B[k++] = A[i++];
    while (j <= right) B[k++] = A[j++];

    for (int i = left; i <= right; i++) {
        A[i] = B[i];
    }
}

void MergeSort(int *arr, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);

        Merge(arr, left, mid, right);
    }
}

int main(void) {
    int a[10] = {3, 2, 4, 5, 1, 9, 6, 8, 7, 0};
    int size = sizeof(a) / sizeof(a[0]);

    MergeSort(a, 0, size - 1);

    for(int i=0; i<10; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}
