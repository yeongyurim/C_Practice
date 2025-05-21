#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    int coef;
    int expon;
    struct ListNode* link;
} ListNode;

typedef struct {
    int size;
    ListNode* head;
    ListNode* tail;
} ListType;

void error(const char* message) {
    fprintf(stderr, "%s\n", message);
    exit(1);
}

ListType* create() {
    ListType* plist = (ListType*)malloc(sizeof(ListType));
    if (plist == NULL) error("메모리 할당 에러");
    plist->size = 0;
    plist->head = plist->tail = NULL;
    return plist;
}

void insert_last(ListType* plist, int coef, int expon) {
    ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
    if (temp == NULL) error("메모리 할당 에러");
    temp->coef = coef;
    temp->expon = expon;
    temp->link = NULL;

    if (plist->tail == NULL)
        plist->head = plist->tail = temp;
    else {
        plist->tail->link = temp;
        plist->tail = temp;
    }
    plist->size++;
}

void poly_add(ListType* plist1, ListType* plist2, ListType* plist3) {
    ListNode* p = plist1->head;
    ListNode* q = plist2->head;
    int sum;

    while (p != NULL && q != NULL) {
        if (p->expon == q->expon) {
            sum = p->coef + q->coef;
            if (sum != 0) insert_last(plist3, sum, p->expon);
            p = p->link;
            q = q->link;
        }
        else if (p->expon > q->expon) {
            insert_last(plist3, p->coef, p->expon);
            p = p->link;
        }
        else {
            insert_last(plist3, q->coef, q->expon);
            q = q->link;
        }
    }

    for (; p != NULL; p = p->link)
        insert_last(plist3, p->coef, p->expon);
    for (; q != NULL; q = q->link)
        insert_last(plist3, q->coef, q->expon);
}

void poly_print(ListType* plist) {
    ListNode* p = plist->head;
    printf("poly = ");
    while (p != NULL) {
        printf("%dX^%d", p->coef, p->expon);
        if (p->link != NULL) printf(" + ");
        p = p->link;
    }
    printf("\n");
}

int main(void) {
    ListType* list1 = create();
    ListType* list2 = create();
    ListType* list3 = create();

    insert_last(list1, 3, 12);
    insert_last(list1, 2, 8);
    insert_last(list1, 1, 0);

    insert_last(list2, 8, 12);
    insert_last(list2, -3, 10);
    insert_last(list2, 10, 6);

    poly_print(list1);
    poly_print(list2);

    poly_add(list1, list2, list3);
    poly_print(list3);

    free(list1);
    free(list2);
    free(list3);
    return 0;
}
