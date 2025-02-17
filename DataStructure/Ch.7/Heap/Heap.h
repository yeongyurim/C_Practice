#ifndef HEAP_H
#define HEAP_H

#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagHeapNode
{
    ElementType Data;
} HeapNode;

typedef struct tagHeap {
    HeapNode* Nodes;
    int Capacity;
    int UsedSize;
} Heap;

Heap* HEAP_Create( int InitialSize );
void  HEAP_Destroy( Heap* H);
void HEAP_ Insert( Heap* H, ElementType NewData );
