#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 100

typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

// 큐 정의
typedef struct {
    TreeNode* data[MAX_QUEUE_SIZE];
    int front, rear;
} Queue;

TreeNode n1 = {1, NULL, NULL};
TreeNode n2 = {4, &n1, NULL};
TreeNode n3 = {16, NULL, NULL};
TreeNode n4 = {25, NULL, NULL};
TreeNode n5 = {20, &n3, &n4};
TreeNode n6 = {15, &n2, &n5};
TreeNode *root = &n6;

void init_queue(Queue* q) {
    q->front = q->rear = 0;
}

int is_empty(Queue* q) {
    return q->front == q->rear;
}

int is_full(Queue* q) {
    return (q->rear + 1) % MAX_QUEUE_SIZE == q->front;
}

void enqueue(Queue* q, TreeNode* item) {
    if (is_full(q)) {
        fprintf(stderr, "큐가 포화 상태입니다.\n");
        exit(1);
    }
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    q->data[q->rear] = item;
}

TreeNode* dequeue(Queue* q) {
    if (is_empty(q)) {
        fprintf(stderr, "큐가 공백 상태입니다.\n");
        exit(1);
    }
    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    return q->data[q->front];
}

// 레벨 순서 순회
void level_order(TreeNode* root) {
    Queue q;
    init_queue(&q);

    if (root == NULL) return;

    enqueue(&q, root);
    while (!is_empty(&q)) {
        TreeNode* node = dequeue(&q);
        printf("%d ", node->data);

        if (node->left != NULL)
            enqueue(&q, node->left);
        if (node->right != NULL)
            enqueue(&q, node->right);
    }
    printf("\n");
}

void preorder(TreeNode *node) {
    if (node != NULL) {
        printf("%d ", node->data);
        preorder(node->left);
        preorder(node->right);
    }
}

void preorderR(TreeNode *node) {
    if (node != NULL) {
        printf("%d ", node->data);
        preorder(node->right);
        preorder(node->left);
    }
}

void inorder(TreeNode *node) {
    if (node != NULL) {
        inorder(node->left);
        printf("%d ", node->data);
        inorder(node->right);
    }
}

void inorderR(TreeNode *node) {
    if (node != NULL) {
        inorderR(node->right);
        printf("%d ", node->data);
        inorderR(node->left);
    }
}

void postorder(TreeNode *node) {
    if (node != NULL) {
        postorder(node->left);
        postorder(node->right);
        printf("%d ", node->data);
    }
}

void postorderR(TreeNode *node) {
    if (node != NULL) {
        postorder(node->right);
        postorder(node->left);
        printf("%d ", node->data);
    }
}

void levelBase(TreeNode *node) {

}
int main(void) {
    printf("전위 순회 = ");
    preorder(root);
    printf("\n");

    printf("우측 전위 순회 = ");
    preorderR(root);
    printf("\n");

    printf("중위 순회 = ");
    inorder(root);
    printf("\n");

    printf("우측 중위 순회 = ");
    inorderR(root);
    printf("\n");

    printf("후위 순회 = ");
    postorder(root);
    printf("\n");

    printf("우측 후위 순회 = ");
    postorderR(root);
    printf("\n");

    printf("레벨 순회 = ");
    level_order(root);
    printf("\n");

    return 0;
}
