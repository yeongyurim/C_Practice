#include "CircularQueue.h"

int main ( void )
{
    Mode mode;
    QueueHolder* queueHolder = (QueueHolder*) malloc(sizeof(QueueHolder));

    printf( "========================\n"
            "|        Menu          |\n"
            "|1. Create Queue       |\n"
            "|2. Enqueue            |\n"
            "|3. Dequeue            |\n"
            "|4. Delete             |\n"
            "========================\n");
    scanf("%d", &mode);

    while(mode != End) {
        switch(mode) {
        case Create : CreateHandler( queueHolder ); break;
        case Enqueue : EnqueueHandler(); break;
        case Dequeue : DequeueHandler(); break;
        case End : EndHandler(); break;
        }
    }
}