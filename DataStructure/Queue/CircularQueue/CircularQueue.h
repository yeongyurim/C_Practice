#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

struct tagNode{
    ElementType Data;
}

typedef struct tagNode Node;
typedef struct *Node NodePtr;

struct tagCircularQueue {
    int Capacity;
    int Front;
    int Rear;

    Node* Nodes;
}

typedef struct tagCircularQueue Queue;
typedef Queue* QueuePtr;


void CQ_CreateQueue( QueuePtr* Queue, int Capacity);
void CQ_DestroyQueue( QueuePtr Queue );
void CQ_EnQueue( QueuePtr Queue, ElementType Data);
ElementType CQ_Dequeue( QueuePtr Queue);
int CQ_GetSize( QueuePtr Queue);
int CQ_IsEmpty( QueuePtr Queue);
int CQ_IsFull( QueuePtr Queue);

#endif