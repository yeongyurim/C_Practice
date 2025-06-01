typedef struct GraphNode {
    int vertex;
    struct GraphNode* link;
} GraphNode;

typedef struct GraphType {
    int n;	// 정점의 개수
    GraphNode* adj_list[MAX_VERTICES];
} GraphType;
