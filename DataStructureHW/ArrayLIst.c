#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define MAX_LIST_SIZE 10
typedef int element;
typedef struct {
    element array[MAX_LIST_SIZE]; // 배열
    int size; // 현재 리스트에 저장된 요소들의 개수
} ArrayListType;

void init(ArrayListType *L) {
    L->size = 0;
}

int is_empty(ArrayListType *L) {
    return (L->size == 0);
}

int is_full(ArrayListType *L) {
    return (L->size == MAX_LIST_SIZE);
}

element get_entry(ArrayListType *L, int pos) {
    if (pos < 0 || pos >= L->size) error("위치 오류");
    return L->array[pos];
}

void print_list(ArrayListType *L) {
    for (int i = 0; i < L->size; i++)
        printf("%d->", L->array[i]);
    printf("\n");
}

void insert_last(ArrayListType *L, element item) {
    if(is_full(L))
        error("리스트 오버플로우");
    L->array[L->size++] = item;
}

void insert(ArrayListType *L, int pos, element item) {
    if (!is_full(L) && (pos >= 0) && (pos <= L->size)) {
        for (int i = (L->size-1); i >= pos; i--)
            L->array[i+1] = L->array[i];
        L->array[pos] = item;
        L->size++;
    }
}

element delete(ArrayListType *L, int pos) {
    element item;
    if (pos < 0 || pos >= L->size)
        error("위치 오류");
    item = L->array[pos];
    for (int i = pos; i < (L->size - 1); i++)
}