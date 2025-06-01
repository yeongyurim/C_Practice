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

// 큐 함수
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

// 순회
void level_order(TreeNode* root) {
    Queue q;
    init_queue(&q);
    if (root == NULL) return;
    enqueue(&q, root);
    while (!is_empty(&q)) {
        TreeNode* node = dequeue(&q);
        printf("%d ", node->data);
        if (node->left != NULL) enqueue(&q, node->left);
        if (node->right != NULL) enqueue(&q, node->right);
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
        preorderR(node->right);
        preorderR(node->left);
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
        postorderR(node->right);
        postorderR(node->left);
        printf("%d ", node->data);
    }
}

// 트리 속성
int max(int a, int b) {
    return (a > b) ? a : b;
}

int get_height(TreeNode *node) {
    if (node == NULL) return 0;
    return 1 + max(get_height(node->left), get_height(node->right));
}

int get_node_count(TreeNode *node) {
    if (node == NULL) return 0;
    return 1 + get_node_count(node->left) + get_node_count(node->right);
}

int get_leaf_count(TreeNode *node) {
    if (node == NULL) return 0;
    if (node->left == NULL && node->right == NULL) return 1;
    return get_leaf_count(node->left) + get_leaf_count(node->right);
}

// 노드 생성
TreeNode *new_node(int data) {
    TreeNode *temp = (TreeNode *)malloc(sizeof(TreeNode));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

// 삽입
TreeNode *insert_node(TreeNode *node, int data) {
    if (node == NULL) return new_node(data);
    if (data < node->data)
        node->left = insert_node(node->left, data);
    else if (data > node->data)
        node->right = insert_node(node->right, data);
    return node;
}

// 탐색
TreeNode *search(TreeNode *node, int key) {
    if (node == NULL) return NULL;
    if (key == node->data) return node;
    else if (key < node->data)
        return search(node->left, key);
    else
        return search(node->right, key);
}

// 최소값 노드
TreeNode *min_value_node(TreeNode *node) {
    TreeNode *current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

// 삭제
TreeNode *delete_node(TreeNode *node, int key) {
    if (node == NULL) return node;
    if (key < node->data)
        node->left = delete_node(node->left, key);
    else if (key > node->data)
        node->right = delete_node(node->right, key);
    else {
        if (node->left == NULL) {
            TreeNode *temp = node->right;
            free(node);
            return temp;
        } else if (node->right == NULL) {
            TreeNode *temp = node->left;
            free(node);
            return temp;
        }
        TreeNode *temp = min_value_node(node->right);
        node->data = temp->data;
        node->right = delete_node(node->right, temp->data);
    }
    return node;
}

// 테스트
int main(void) {
    TreeNode *bst_root = NULL;
    int values[] = {15, 10, 20, 8, 12, 17, 25};
    int n = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < n; i++)
        bst_root = insert_node(bst_root, values[i]);

    printf("BST 전위 순회: ");
    preorder(bst_root);
    printf("\n");

    printf("BST 우측 전위 순회: ");
    preorderR(bst_root);
    printf("\n");

    printf("BST 중위 순회: ");
    inorder(bst_root);
    printf("\n");

    printf("BST 우측 중위 순회: ");
    inorderR(bst_root);
    printf("\n");

    printf("BST 후위 순회: ");
    postorder(bst_root);
    printf("\n");

    printf("BST 우측 후위 순회: ");
    postorderR(bst_root);
    printf("\n");

    printf("BST 높이: %d\n", get_height(bst_root));
    printf("BST 노드 수: %d\n", get_node_count(bst_root));
    printf("BST 단말 노드 수: %d\n", get_leaf_count(bst_root));

    // 삭제 테스트
    printf("20 삭제 후 중위 순회: ");
    bst_root = delete_node(bst_root, 20);
    inorder(bst_root);
    printf("\n");

    // 탐색 테스트
    TreeNode *found = search(bst_root, 12);
    if (found) printf("12 찾음\n");
    else printf("12 없음\n");

    return 0;
}
