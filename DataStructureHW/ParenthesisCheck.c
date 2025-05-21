#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int is_empty(StackType *s)
{
    return (s->top == -1);
}

void push(StackType *s, element item)
{
    if (is_full(s)) {
        s->capacity *= 2;
        s->data = (element *)realloc(s->data, s->capacity * sizeof(element));
    }
    s->data[++(s->top)] = item;
}

element pop(StackType *s)
{
    if (is_empty(s)) {
        fprintf(stderr, "Stack underflow\n");
        exit(1);
    }
    return s->data[(s->top)--];
}

void print_stack(StackType *s)
{
    printf("Stack (top=%d, capacity=%d): ", s->top, s->capacity);
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}

int check_matching(const char *in) {
    StackType s;
    init_stack(&s);

    for (int i = 0; i < strlen(in); i++) {
        char ch = in[i];
        if (ch == '(' || ch == '[' || ch == '{') {
            push(&s, ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (is_empty(&s)) return 0;
            char open_ch = pop(&s);
            if ((open_ch == '(' && ch != ')') ||
                (open_ch == '[' && ch != ']') ||
                (open_ch == '{' && ch != '}')) {
                return 0;
            }
        }
    }

    int result = is_empty(&s);  // 모두 짝 맞으면 empty여야 함
    free(s.data);               // 메모리 해제
    return result;
}

int main()
{
    // 괄호 검사 테스트
    const char *test1 = "{[()]}";
    const char *test2 = "{[(])}";
    printf("Test 1: %s => %s\n", test1, check_matching(test1) ? "Matched" : "Not matched");
    printf("Test 2: %s => %s\n", test2, check_matching(test2) ? "Matched" : "Not matched");

    return 0;
}