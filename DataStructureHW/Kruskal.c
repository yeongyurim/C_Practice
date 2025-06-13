#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 10

int parent[MAX_VERTICES];

struct Edge {
    int start, end, weight;
};

typedef struct GraphType {
    int n;  // 간선의 개수
    int nvertex; // 정점의 개수
    struct Edge edges[2 * MAX_VERTICES];
} GraphType;

void set_init(int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = -1;
    }
}

int get_find(int curr) {
    while (parent[curr] != -1)
        curr = parent[curr];
    return curr;
}

void set_union(int a, int b) {
    int root1 = get_find(a);
    int root2 = get_find(b);
    if (root1 != root2)
        parent[root1] = root2;
}

int compare(const void *a, const void *b) {
    struct Edge *e1 = (struct Edge *)a;
    struct Edge *e2 = (struct Edge *)b;
    return e1->weight - e2->weight;
}

void kruskal(GraphType *g) {
    int edge_accepted = 0; // 현재까지 선택된 간선의 수
    int uset, vset;
    struct Edge e;

    set_init(g->nvertex);
    qsort(g->edges, g->n,sizeof(struct Edge), compare); // 간선을 비용순으로 정렬

    for (int i = 0; edge_accepted < (g->nvertex-1); i++) { // 간선의 수 <= (n-1)
        e = g->edges[i]; // 정렬된 간선 집합에서 비용이 가장 작은 간선 선택
        uset = get_find(e.start); // 정점 u의 집합 번호 (루트 노드)
        vset = get_find(e.end); // 정점 v의 집합 번호 (루트 노드)
        if ( uset != vset ) {
            printf(" 간선 (%d,%d) %d 선택 \n", e.start, e.end, e.weight);
            edge_accepted++;
            set_union(uset,vset);
        }

    }
}

void graph_init(GraphType *g) {
    g->n = 0;
    g->nvertex = 0;
}

void insert_edge(GraphType *g, int start, int end, int weight) {
    g->edges[g->n].start = start;
    g->edges[g->n].end = end;
    g->edges[g->n].weight = weight;
    g->n++;
}

int main(void) {
    GraphType *g = (GraphType *)malloc(sizeof(GraphType));
    graph_init(g);

    insert_edge(g, 0, 1, 29);
    insert_edge(g, 1, 2, 16);
    insert_edge(g, 2, 3, 12);
    insert_edge(g, 3, 4, 22);
    insert_edge(g, 4, 5, 27);
    insert_edge(g, 5, 0, 10);
    insert_edge(g, 6, 1, 15);
    insert_edge(g, 6, 3, 18);
    insert_edge(g, 6, 4, 25);

    g->nvertex = 7;

    kruskal(g);

    free(g);
    return 0;
}