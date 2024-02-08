#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

struct tagNode
{
    ElementType Data;
    struct tagNode* NextNode;
};

typedef struct tagNode Node;
typedef Node *NodePtr;

// prototypes
Node* CreateNode(ElementType NewData);
void DestroyNode(NodePtr Node);
void AppendNode(NodePtr* Head, NodePtr NewNode);
void InsertAfter(NodePtr Current, NodePtr NewNode);
void InsertNewHead(NodePtr* Head, NodePtr NewHead);
void RemoveNode(NodePtr* Head, NodePtr Remove);
Node* GetNodeAt(NodePtr Head, int location);
int GetNodeCount(NodePtr Head);

#endif