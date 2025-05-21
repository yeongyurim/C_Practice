#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct {
    element *data;
    int capacity;
    int top;
} StackType;

void init_stack(StackType *s)
{
    s->top = -1;
    s->capacity = 1;
    s->data = (element *) malloc(s->capacity * sizeof(element));
}

int is_full(StackType *s)
{
    return (s->top == (s->capacity - 1));
}

void push(StackType *s, element item)
{
    if (is_full(s)) {
        s->capacity *= 2;
        s->data = (element *)realloc(s->data, s->capacity * sizeof(element));
    }
    s->data[++(s->top)] = item;
}

void print_stack(StackType *s)
{
    printf("Stack (top=%d, capacity=%d): ", s->top, s->capacity);
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}

int main()
{
    StackType s;
    init_stack(&s);

    for (int i = 1; i <= 10; i++) {
        push(&s, i * 10);  // 10, 20, ..., 100
        print_stack(&s);
    }

    free(s.data);

    return 0;
}