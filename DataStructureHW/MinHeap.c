#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENT 100

typedef struct {
    int key;
} element;

typedef struct {
    element heap[MAX_ELEMENT];
    int heap_size;
} HeapType;

HeapType* create() {
    return (HeapType*)malloc(sizeof(HeapType));
}

void init(HeapType* h) {
    h->heap_size = 0;
}

void insert_min_heap(HeapType *h, element item) {
    int i = ++(h->heap_size);
    while ((i != 1) && (item.key < h->heap[i / 2].key)) {
        h->heap[i] = h->heap[i / 2];
        i /= 2;
    }
    h->heap[i] = item;
}

element delete_min_heap(HeapType *h) {
    int parent = 1, child = 2;
    element item = h->heap[1];
    element temp = h->heap[(h->heap_size)--];

    while (child <= h->heap_size) {
        if ((child < h->heap_size) && (h->heap[child].key > h->heap[child + 1].key))
            child++;
        if (temp.key <= h->heap[child].key)
            break;
        h->heap[parent] = h->heap[child];
        parent = child;
        child *= 2;
    }
    h->heap[parent] = temp;
    return item;
}

void heap_sort(element a[], int n)
{
    int i;
    HeapType* h;
    h = create();
    init(h);
    for (i = 0; i < n; i++)
        insert_min_heap(h, a[i]);
    for (i = 0; i < n; i++)
        a[i] = delete_min_heap(h);
    free(h);
}


int main(void)
{
    element list[8] = { 23, 56, 11, 9, 56, 99, 27, 34 };
    heap_sort(list, 8);
    for (int i = 0; i < 8; i++)
        printf("%d ", list[i].key);
    printf("\n");
    return 0;
}

