#include "LinkedList.h"

int main(void){
    int i = 0;
    int Count = 0;
    Node* List = NULL;
    Node* Current = NULL;
    Node* NewNode = NULL;

    // Create Node 5times
    for(i=0;i<5;i++){
        NewNode = SLL_CreateNode(i);
        SLL_AppendNode(&List,NewNode);
    }

    NewNode = SLL_CreateNode(-1);
    SLL_InsertNewHead(&List,NewNode);

    NewNode = SLL_CreateNode(-2);
    SLL_InsertNewHead(&List,NewNode);

    Current = NewNode;
    NewNode = SLL_CreateNode(-3);
    SLL_InsertBefore(&List,Current,NewNode);

    Current = SLL_GetNodeAt(List,2);
    NewNode = SLL_CreateNode(-11);
    SLL_InsertBefore(&List,Current,NewNode);


    // print List
    Count = SLL_GetNodeCount(List);
    for(i=0; i<Count; i++)
    {
        Current = SLL_GetNodeAt(List,i);
        printf("List[%d] : %d\n",i,Current->Data);
    }

    // 리스트의 세 번쨰 노드 뒤에 새 노드 삽입
    printf("\nInserting 3000 After [2]...\n\n");

    Current = SLL_GetNodeAt(List,2);
    NewNode = SLL_CreateNode(3000);

    SLL_InsertAfter(Current,NewNode);

    // 리스트 출력
    Count = SLL_GetNodeCount(List);
    for (i = 0;i<Count; i++)
    {
        Current = SLL_GetNodeAt(List,i);
        printf("List[%d] : %d\n",i, Current->Data);
    }

    // 모든 노드를 메모리에서 제거
    printf("\nDestroying List...\n");
    
    return 0;
}