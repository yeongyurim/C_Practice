#include "DoublyLinkedList.h"


// Create Node
Node* DLL_CreateNode( ElementType NewData )
{
    Node* NewNode = (Node*)malloc(sizeof(Node));

    NewNode->Data = NewData;
    NewNode->PrevNode = NULL; // for bidirectional navigation store the previous node address 
    NewNode->NextNode = NULL;

    return NewNode;    
}

// Destroy Node
void  DLL_DestroyNode( Node* Node )
{
    free(Node);
}

// Append Node
void  DLL_AppendNode( Node** Head, Node* NewNode )
{
    // if Head Node is NULL , NewNode be the Head
    if ( (*Head) == NULL )
    {
        *Head = NewNode;
    }
    else
    {
        // find the Tail and connect NewNode
        Node* Tail = (*Head);
        while ( Tail->NextNode != NULL )
        {
            Tail = Tail->NextNode;
        }

        Tail->NextNode = NewNode;
        NewNode->PrevNode = Tail;
    }
}

// Insert Node after current
void  DLL_InsertAfter( Node* Current, Node* NewNode )
{
    NewNode->NextNode = Current->NextNode;
    NewNode->PrevNode = Current;

    if ( Current->NextNode != NULL )
    {
        Current->NextNode->PrevNode = NewNode;
        Current->NextNode = NewNode;
    }
}

// Remove Node
void  DLL_RemoveNode( Node** Head, Node* Remove )
{
    if ( *Head == Remove )
    {
        *Head = Remove->NextNode;
        if ( (*Head) != NULL )
            (*Head)->PrevNode = NULL;

        Remove->PrevNode = NULL;
        Remove->NextNode = NULL;         
    }
    else
    {
        Node* Temp = Remove;

        if( Remove->PrevNode != NULL )
            Remove->PrevNode->NextNode = Temp->NextNode;
        if( Remove->NextNode != NULL )
            Remove->NextNode->PrevNode = Temp->PrevNode;

        Remove->PrevNode = NULL;
        Remove->NextNode = NULL;
    }
}

// Get Node by Index
Node* DLL_GetNodeAt( Node* Head, int Location )
{
    Node* Current = Head;

    while ( Current != NULL && (--Location) >= 0 )
    {
        Current = Current->NextNode;
    }

    return Current;
}

// Get Node Count
int   DLL_GetNodeCount( Node* Head )
{
    unsigned int Count = 0;
    Node*        Current = Head;

    while ( Current != NULL )
    {
        Current = Current->NextNode;
        Count++;
    }

    return Count;
}

// Print Node
void PrintNode( Node* _Node )
{
    if ( _Node->PrevNode == NULL )
        printf("Prev: NULL");
    else
        printf("Prev: %d", _Node->PrevNode->Data);

    printf("Current : %d", _Node->Data);

    if ( _Node->NextNode == NULL )
        printf("Next: NULL");
    else
        printf("Next: %d", _Node->NextNode->Data);
}
