#ifndef LCRS_TREE_H
#define LCRS_TREE_H

#include <stdio.h>
#include <stdlib.h>

typedef char ElementType;

struct tagLCRSNode {
    struct tagLCRSNode* LC;
    struct tagLCRSNode* RS;

    ElementType Data;
};

typedef struct tagLCRSNode LCRSNode;
typedef LCRSNode* LCRSNodePtr;

LCRSNodePtr  CreateNode(ElementType newData);
void DestroyNode(LCRSNodePtr Node);
void DestroyTree(LCRSNodePtr root);

void AddChildNode( LCRSNodePtr ParaentNode, LCRSNodePtr childNode);
void PrintTree( LCRSNodePtr Node, int Depth);

#endif
