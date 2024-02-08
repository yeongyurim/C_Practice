#include "LCRSTree.h"

int main( void ) {
    // create root node
    LCRSNodePtr root = CreateNode('A');
    LCRSNodePtr b = CreateNode('B');
    LCRSNodePtr c = CreateNode('C');
    LCRSNodePtr d = CreateNode('D');
    LCRSNodePtr e = CreateNode('E');
    LCRSNodePtr f = CreateNode('F');
    LCRSNodePtr g = CreateNode('G');
    LCRSNodePtr h = CreateNode('H');
    LCRSNodePtr i = CreateNode('I');
    LCRSNodePtr j = CreateNode('J');
    LCRSNodePtr k = CreateNode('K');

    // append the node to the tree
    AddChildNode(root,b);
        AddChildNode(b,c);
        AddChildNode(b,d);
            AddChildNode(d,e);
            AddChildNode(d,f);

    AddChildNode(root,g);
        AddChildNode(g,h);

    AddChildNode(root,i);
        AddChildNode(i,j);
            AddChildNode(j,k);

    // print the whole tree
    PrintTree(root, 0);
    

}