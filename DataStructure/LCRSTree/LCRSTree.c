#include "LCRSTree.h"

LCRSNodePtr CreateNode(ElementType newData) {
    LCRSNodePtr newNode = (LCRSNodePtr)malloc(sizeof(LCRSNode));
    newNode->LC = NULL;
    newNode->RS = NULL;

    return newNode;
}

void DestroyNode( LCRSNodePtr node ) {
    free(node);
}

void DestroyTree( LCRSNodePtr root ) {
    if ( root->RS != NULL )
        DestroyTree( root->RS );
    
    if ( root->LC != NULL )
        DestroyTree( root->LC);

    root->LC = NULL;
    root->RS = NULL;

    DestroyNode(root);
}

void AddChildNode( LCRSNodePtr parent, LCRSNodePtr child) {
    if ( parent->LC == NULL )
        parent->LC = child;
    else {
        LCRSNodePtr tempNode = parent->LC;
        while ( tempNode->RS == NULL )
            tempNode = tempNode->RS;
        tempNode->RS = child;
    }
}

void PrintTree( LCRSNodePtr node, int depth) {
    int i = 0;
    for ( i=0; i<depth-1; i++)
        printf("   ");

    if (depth > 0) // inform whether the node is root or not
        printf("+--");

    // print data in node
    printf("%c\n", node->Data);

    if ( node->LC != NULL )
        PrintTree(node->LC, depth + 1);
    
    if ( node->RS != NULL )
        PrintTree(node->RS, depth);
}
