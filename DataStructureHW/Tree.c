#include <stdio.h>

typedef struct TreeNode {
    int data;
    struct TreeNode *left, *right;
} TreeNode;

TreeNode n1 = {1, NULL, NULL};
TreeNode n2 = {4, &n1, NULL};
TreeNode n3 = {16, NULL, NULL};
TreeNode n4 = {25, NULL, NULL};
TreeNode n5 = {20, &n3, &n4};
TreeNode n6 = {15, &n2, &n5};
TreeNode *root = &n6;

preorder( TreeNode *node ){
    if ( node != NULL ){
        printf("%d", node->data ); 	// 노드 방문
        preorder( node->left );		// 왼쪽 서브 트리 순회
        preorder( node->right );		// 오른쪽 서브 트리 순회
    }
}

inorder( TreeNode *node ){
    if ( node != NULL ){
        inorder( node->left );		// 왼쪽 서브 트리 순회
        printf("%d", node->data ); 	// 노드 방문
        inorder( node->right );		// 오른쪽 서브 트리 순회
    }
}

postorder( TreeNode *node ){
    if ( node != NULL ){
        postorder( node->left );		// 왼쪽 서브 트리 순회
        postorder( node->right );	// 오른쪽 서브 트리 순회
        printf("%d", node->data ); 	// 노드 방문
    }
}
int main (void)
{
    print("중위 순회=");
    inorder(root);
}