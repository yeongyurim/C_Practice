#ifndef LINKEDLIST_H // LINKEDLIST_H를 define하지 않았다면 
#define LINKEDLIST_H // endif 이전까지의 코드를 포함시켜라

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode{
    ElementType Data;
    struct Node* NextNode;
}Node;

typedef Node* NodePtr;
// 함수 원형 선언
Node* SLL_CreateNode(ElementType NewData);
void  SLL_DestroyNode(NodePtr Node);
void  SLL_AppendNode(NodePtr* Head, NodePtr NewNode);
void  SLL_InsertAfter(NodePtr Current, NodePtr NewNode);
void  SLL_InsertBefore(NodePtr* Head, NodePtr Current, NodePtr NewHead);
void  SLL_InsertNewHead(NodePtr* Head, NodePtr NewHead);
void  SLL_RemoveNode(NodePtr* Head, NodePtr Remove);
Node* SLL_GetNodeAt(NodePtr Head, int Location);
int   SLL_GetNodeCount(NodePtr Head);
#endif