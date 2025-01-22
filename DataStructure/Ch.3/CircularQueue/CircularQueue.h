#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode
{
    ElementType Data;
} Node;

typedef enum Mode {
    Create = 1,
    Enqueue = 2,
    Dequeue = 3,
    End = 4
} Mode;

typedef struct tagCircularQueue
{
    char name [10];
    int Capacity;
    int Front;
    int Rear;

    Node* Nodes;
} CircularQueue;

typedef struct QueueHolder {
    CircularQueue* Queue;
    CircularQueue* NextQueue;
} QueueHolder;

void CQ_MenuHandler(Mode mode);
void CreateHandler( QueueHolder* );
void EnqueueHandler();
void DequeueHandler();
void EndHandler();
void CQ_CreateQueue( CircularQueue** Queue, int Capacity );
void CQ_DestroyQueue( CircularQueue* Queue );
void CQ_Enqueue( CircularQueue* Queue, ElementType Data );
ElementType CQ_Dequeue( CircularQueue* Queue );
int CQ_GetSize( CircularQueue* Queue );
int CQ_IsEmpty( CircularQueue* Queue );
int CQ_IsFull( CircularQueue* Queue );
