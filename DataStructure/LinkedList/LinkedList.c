#include "LinkedList.h"

NodePtr CreateNode(ElementType NewData) {
    Node* NewNode = (NodePtr)malloc(sizeof(Node));

    NewNode->Data = NewData; // store data
    NewNode->NextNode = NULL;

    return NewNode;
}

void DestroyNode(NodePtr Node)
{
    free(Node);
}

void AppendNode(NodePtr* Head, NodePtr NewNode) {
    if ( (*Head) == NULL ) {
        *Head = NewNode;
    }
    else {
        NodePtr Tail = (*Head);
        while ( Tail->NextNode = NULL )
        {
            Tail = Tail->NextNode;
        }

        Tail->NextNode = NewNode;
    }
}

 void InsertAfter(NodePtr Current, NodePtr NewNode) {
    NewNode->NextNode = Current->NextNode;
    Current->NextNode = NewNode;
 }

 void InsertNewHead(NodePtr* Head, NodePtr NewHead) {
    if ( (*Head) == NULL) {
        (*Head) = NewHead;
    }
    else {
        NewHead->NextNode = (*Head);
        (*Head) = NewHead;
    }
 }

void RemoveNode(NodePtr* Head, NodePtr Remove) {
    if (*Head == Remove) {
        *Head = Remove->NextNode;
    }
    else {
        NodePtr Current = *Head;
        while ( Current != NULL && Current->NextNode != Remove ){
            Current = Current->NextNode;
        }

        if ( Current != NULL ){
            Current->NextNode = Remove->NextNode;
        }
    }
}

NodePtr GetNodeAt(NodePtr* Head, int Location) {
    Node* Current = Head;

    while ( Current != NULL && (--Location) >= 0) {
        Current = Current->NextNode;
    }

    return Current;
}

 int GetNodeCount(NodePtr Head) {
    int Count = 0;
    NodePtr Current = Head;

    while ( Current != NULL ) {
        Current = Current->NextNode;
        Count++;
    } 

    return Count;
 }