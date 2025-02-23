#include "Heap.h"

Heap* HEAP_Create( int InitialSize )
{
    Heap* NewHeap = ( Heap* ) malloc( sizeof( Heap ) );
    NewHeap->Capacity = InitialSize;
    NewHeap->UsedSize = 0;
    NewHeap->Nodes = (HeapNode*) malloc( sizeof ( HeapNode )
    * NewHeap->Capacity );

    printf("size : %d\n", sizeof(HeapNode));

    return NewHeap;
}

void HEAP_Destroy( Heap* H )
{
    free( H->Nodes );
    free( H );
}