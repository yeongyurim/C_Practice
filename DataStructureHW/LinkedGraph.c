#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_VERTICES 7

bool visited[MAX_VERTICES] = {0};

typedef struct GraphNode {
    int vertex;
    struct GraphNode* link;
} GraphNode;

typedef struct GraphType {
    int n; 
    GraphNode* adj_list[MAX_VERTICES];
} GraphType;

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
    printf("정점 %d ->", v);
    for(w = g->adj_list[v]; w; w= w->link) // 인접 정점 탐색
        if (!visited[w->vertex])
            dfs_list(g,w->vertex);
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

    // 인접 리스트 출력
    dfs_list(g,0);

    return 0;
}
