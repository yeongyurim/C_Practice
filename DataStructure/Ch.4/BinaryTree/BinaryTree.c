#include "BinaryTree.h"

SBTNode* SBT_CreateNode( ElementType NewData )
{
    SBTNode* NewNode = (SBTNode*)malloc( sizeof(SBTNode) );
    NewNode->Left    = NULL;
    NewNode->Right   = NULL;
    NewNode->Data    = NewData;

    return NewNode;
}

void SBT_DestroyNode( SBTNode* Node )
{
    free(Node);
}

void SBT_DestroyTree( SBTNode* Node )
{
    if( Node == NULL)
        return;

    // 왼쪽 하위 트리 소멸
    SBT_DestroyTree( Node->Left );

    // 오른쪽 하위 트리 소멸
    SBT_DestroyTree( Node->Right);

    // 뿌리 노드 소멸
    SBT_DestroyTree( Node );
}