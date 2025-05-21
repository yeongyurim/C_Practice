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

int is_full(StackType *s) { return s->top == (s->capacity - 1); }
int is_empty(StackType *s) { return s->top == -1; }

void push(StackType *s, element item)
{
    if (is_full(s)) {
        s->capacity *= 2;
        s->data = (element *) realloc(s->data, s->capacity * sizeof(element));
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

element peek(StackType *s) {
    if (is_empty(s)) {
        fprintf(stderr, "Stack is empty\n");
        exit(1);
    }
    return s->data[s->top];
}

void print_stack(StackType *s)
{
    printf("Stack (top=%d, capacity=%d): ", s->top, s->capacity);
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}

// 연산자의 우선순위 반환
int prec(char op) {
    switch (op) {
        case '(': case ')': return 0;
        case '+': case '-': return 1;
        case '*': case '/': return 2;
    }
    return -1;
}

// 후위 수식 계산
int eval(char exp[]) {
    int op1, op2, value, i = 0;
    int len = strlen(exp);
    char ch;
    StackType s;
    init_stack(&s);

    for (i = 0; i < len; i++) {
        ch = exp[i];
        if (ch >= '0' && ch <= '9') {
            value = ch - '0';
            push(&s, value);
        } else {
            op2 = pop(&s);
            op1 = pop(&s);
            switch (ch) {
                case '+': push(&s, op1 + op2); break;
                case '-': push(&s, op1 - op2); break;
                case '*': push(&s, op1 * op2); break;
                case '/': push(&s, op1 / op2); break;
            }
        }
    }
    int result = pop(&s);
    free(s.data);
    return result;
}

// 중위 수식을 후위 수식으로 출력
void infix_to_postfix(char exp[]) {
    int i = 0;
    char ch, top_op;
    int len = strlen(exp);
    StackType s;
    init_stack(&s);

    for (i = 0; i < len; i++) {
        ch = exp[i];
        switch (ch) {
            case '+': case '-': case '*': case '/':
                while (!is_empty(&s) && (prec(ch) <= prec(peek(&s))))
                    printf("%c", pop(&s));
                push(&s, ch);
                break;
            case '(':
                push(&s, ch);
                break;
            case ')':
                top_op = pop(&s);
                while (top_op != '(') {
                    printf("%c", top_op);
                    top_op = pop(&s);
                }
                break;
            default:
                printf("%c", ch);
                break;
        }
    }
    while (!is_empty(&s))
        printf("%c", pop(&s));
    free(s.data);
}

int main(void) {
    // 후위표기식 평가
    printf("후위표기식은: 82/3-32*+\n");
    int result = eval("82/3-32*+");
    printf("결과값은: %d\n", result);

    // 중위 -> 후위 변환
    const char *s = "(2+3)*4+9";
    printf("중위표시수식: %s\n", s);
    printf("후위표시수식: ");
    infix_to_postfix((char *)s);  // const 제거 경고 피하려면 복사본 써도 됨
    printf("\n");

    return 0;
}
