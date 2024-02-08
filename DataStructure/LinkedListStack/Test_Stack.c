#include "LinkedListStack.h"

int main (void){
    LinkedListStack* stack = (LinkedListStack*) malloc(sizeof(LinkedListStack));
    Node* node = LLS_CreateNode("gyuriim");
    LLS_Push(stack,node);
    printf("poped data is %s", LLS_Pop(stack)->Data);
}