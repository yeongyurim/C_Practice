#include <stdio.h>

#define SWAP(x, y, t) ( (t) = (x), (x) = (y), (y) = (t) )

void selection_sort(int list[], int n) {
    int i, j, least, temp;
    for(i = 0; i < n - 1; i++) {
        least = i;
        for(j = i + 1; j < n; j++)
            if (list[j] < list[least]) least = j;
        SWAP(list[i], list[least], temp);
    }
}

void print_array(int list[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", list[i]);
    printf("\n");
}

int main() {
    int list[] = {29, 10, 14, 37, 13};
    int n = sizeof(list) / sizeof(list[0]);

    printf("Before sorting: ");
    print_array(list, n);

    selection_sort(list, n);

    printf("After sorting:  ");
    print_array(list, n);

    return 0;
}
