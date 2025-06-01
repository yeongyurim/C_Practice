#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_VERTICES 7

bool visited[MAX_VERTICES] = {0};

typedef struct GraphType {
    int n; // 정점의 개수
    int adj_mat[MAX_VERTICES][MAX_VERTICES];
} GraphType;

// 그래프 초기화
void init(GraphType* g) {
    g->n = 0;
    for (int i = 0; i < MAX_VERTICES; i++)
        for (int j = 0; j < MAX_VERTICES; j++)
            g->adj_mat[i][j] = 0;
}

// 정점 삽입 연산
void insert_vertex(GraphType* g, int v) {
    g->n++;
}

// 간선 삽입 연산
void insert_edge(GraphType* g, int start, int end) {
    g->adj_mat[start][end] = 1;
    g->adj_mat[end][start] = 1;
}

// 인접 행렬로 표현된 그래프에 대한 깊이 우선 탐색
void dfs_mat(GraphType* g, int v) {
    int w;
    visited[v] = true; // 정점 v의 방문 표시
    printf("정점 %d->", v); // 방문한 정점 출력
    for (w=0; w<g->n; w++) // 인접 정점 탐색
        if(g->adj_mat[v][w] && !visited[w])
            dfs_mat(g,w);
}

int main(void) {
    GraphType* g = (GraphType*)malloc(sizeof(GraphType));
    init(g);

    for (int i = 0; i < 4; i++)
        insert_vertex(g, i);

    insert_edge(g, 0, 1);
    insert_edge(g, 0, 2);
    insert_edge(g, 1, 3);
    insert_edge(g, 1, 4);
    insert_edge(g, 2, 5);
    insert_edge(g, 2, 6);
    dfs_mat(g,0);
    free(g);

    return 0;
}
