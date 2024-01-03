#include "CircularQueue.c"

void CQ_CreateQueue( QueuePtr* Queue, int Capacity){
    // store queue in the heap
    (*Queue ) = ( QueuePtr )malloc(sizeof( Queue ));

    // generate Capacity + 1 number of Nodes in heap
    (*Queue )->Nodes = (Node*)malloc(sizeof(Node )* ( Capacity+1 ));

    (*Queue)->Capacity = Capacity;
    (*Queue)->Front = 0;
    (*Queue)->Rear = 0;
}

void CQ_DestroyQueue( Queue* Queue){
    free(Queue->Nodes);
    free()
}