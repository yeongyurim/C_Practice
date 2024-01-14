#include "LinkedList.h"

int main(void) {
    int i = 0;
    int Count = 0;
    NodePtr List = NULL;
    NodePtr Current = NULL;
    NodePtr NewNode = NULL;

    for ( i = 0; i < 5; i++ ) {
        NewNode = CreateNode(i);
        AppendNode(&List, NewNode);
    }
}