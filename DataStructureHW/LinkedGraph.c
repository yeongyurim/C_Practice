#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_VERTICES 7
#define MAX_QUEUE_SIZE 100

bool visited[MAX_VERTICES] = {0};

typedef struct GraphNode {
    int vertex;
    struct GraphNode* link;
} GraphNode;

typedef struct GraphType {
    int n; 
    GraphNode* adj_list[MAX_VERTICES];
} GraphType;

typedef struct {
    int items[MAX_QUEUE_SIZE];
    int front;
    int rear;
} Queue;

// 큐 초기화
void init_queue(Queue* q) {
    q->front = q->rear = 0;
}

// 큐 공백 확인
bool is_empty(Queue* q) {
    return q->front == q->rear;
}

// 큐 포화 확인
bool is_full(Queue* q) {
    return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}

// 큐 삽입
void enqueue(Queue* q, int item) {
    if (is_full(q)) {
        fprintf(stderr, "큐 포화 오류\n");
        exit(1);
    }
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    q->items[q->rear] = item;
}

// 큐 삭제
int dequeue(Queue* q) {
    if (is_empty(q)) {
        fprintf(stderr, "큐 공백 오류\n");
        exit(1);
    }
    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    return q->items[q->front];
}

void init(GraphType* g) {
    g->n = 0;
    for (int i = 0; i < MAX_VERTICES; i++)
        g->adj_list[i] = NULL;
}

void insert_vertex(GraphType* g) {
    g->n++;
}

void insert_edge(GraphType* g, int u, int v) {

    GraphNode* node1 = (GraphNode*)malloc(sizeof(GraphNode));
    node1->vertex = v;
    node1->link = g->adj_list[u];
    g->adj_list[u] = node1;

    GraphNode* node2 = (GraphNode*)malloc(sizeof(GraphNode));
    node2->vertex = u;
    node2->link = g->adj_list[v];
    g->adj_list[v] = node2;
}

void dfs_list(GraphType* g, int v) {
    GraphNode* w;
    visited[v] = true;
    printf("정점 %d -> ", v);
    for(w = g->adj_list[v]; w; w= w->link) // 인접 정점 탐색
        if (!visited[w->vertex])
            dfs_list(g,w->vertex);
}

void bfs_list(GraphType* g, int v) {
    GraphNode* w;
    Queue q;

    init_queue(&q);
    visited[v] = true;
    printf("정점 %d -> ", v);
    enqueue(&q, v);
    while(!is_empty(&q)) {
        v = dequeue(&q);
        for (w = g->adj_list[v]; w; w= w->link)
            if (!visited[w->vertex]){
                visited[w->vertex] = true;
                printf("정점 %d -> ",w->vertex);
                enqueue(&q,w->vertex);
            }
    }
}

int main(void) {
    GraphType* g = (GraphType*)malloc(sizeof(GraphType));
    init(g);

    // 정점 5개 추가
    for (int i = 0; i < 7; i++)
        insert_vertex(g);

    // 간선 추가
    insert_edge(g, 0, 1);
    insert_edge(g, 0, 2);
    insert_edge(g, 1, 3);
    insert_edge(g, 1, 4);
    insert_edge(g, 2, 5);
    insert_edge(g, 2, 6);

    printf("\n");
    dfs_list(g, 0);  // 첫 번째 BFS

    for (int i = 0; i < MAX_VERTICES; i++)
        visited[i] = false;

    printf("\n");
    bfs_list(g, 0);  // 두 번째 BFS

    return 0;
}
