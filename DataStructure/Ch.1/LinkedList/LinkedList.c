#include "LinkedList.h"

// Create Node
Node* SLL_CreateNode(ElementType NewData)
{
    Node* NewNode = (Node*)malloc(sizeof(Node)); // Heap(자유 저장소)에 Node구조체 크기 만큼의 메모리를 할당하고 그 주소값을 NewNode에 추가해준다.

    NewNode->Data = NewData;
    NewNode->NextNode = NULL;

    return NewNode;
};

// Destroy Node
void SLL_DestroyNode(NodePtr Node)
{
    free(Node); //Heap에서 메모리를 해제시켜준다.
};

// Append Node
void SLL_AppendNode(NodePtr* Head, NodePtr NewNode)
{ 
    // 헤드 노드가 NULL이면 새로운 노드가 Head가 된다.
    if((*Head) == NULL){
        *Head = NewNode; // Head -> List -> NULL = NewNode;
    }
    else{
        NodePtr Tail = (*Head);
        while (Tail->NextNode != NULL){
            Tail = Tail->NextNode;
        }

        Tail->NextNode = NewNode;
    }
}

// Insert Node
void SLL_InsertAfter(NodePtr Current, NodePtr NewNode)
{
    NewNode->NextNode = Current->NextNode;
    Current->NextNode = NewNode;
}

void SLL_InsertBefore(NodePtr* Head,NodePtr Current, NodePtr NewHead){
    if( (*Head) == Current )
    {
        NewHead->NextNode = (*Head);
        (*Head) = NewHead;
    }
    else{
        Node* BeforeNode = (*Head);
        while( BeforeNode->NextNode != Current){
            BeforeNode = BeforeNode->NextNode;
        }
        NewHead->NextNode = Current;
        BeforeNode->NextNode = NewHead;
    }
}

void SLL_InsertNewHead(NodePtr* Head, NodePtr NewHead)
{
    if ( Head == NULL )
    {
        (*Head) = NewHead;
    }
    else
    {
        NewHead->NextNode = (*Head);
        (*Head) = NewHead;
    }
}

// Remove Node
void SLL_RemoveNode(NodePtr* Head, NodePtr Remove)
{
    if (*Head == Remove){
        *Head = Remove->NextNode;
    }
    else {
        Node* Current = *Head;
        while ( Current != NULL && Current->NextNode != Remove){
            Current = Current->NextNode;
        }

        if(Current != NULL) Current->NextNode = Remove->NextNode;
    }
}

// Serch Node
Node* SLL_GetNodeAt(NodePtr Head, int Location)
{
    Node* Current = Head;

    // n-1번쨰가 목표 노드이므로 location을 0이 될떄까지 뺀다.
    while ( Current != NULL && (--Location) >= 0){
        Current = Current->NextNode;
    }

    return Current;
}

// Count Node
int SLL_GetNodeCount(NodePtr Head)
{
    int Count = 0;
    Node* Current = Head;

    while(Current!=NULL) {
        Current = Current->NextNode;
        Count++;
    }
    return Count;
}

