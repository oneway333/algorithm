#include <stdio.h>
#include <stdlib.h>

// 邻接表

#define MAXSIZE 100
#define FALSE 0
#define TRUE 1

typedef char VertexType;
typedef int EdgeType;

// 边表结点
typedef struct edgeNode{
    int adjvex;
    EdgeType weight; // 边的权值
    struct edgeNode *next;
} EdgeNode;

// 顶点结点
typedef struct {
    VertexType data;
    EdgeNode *firstEdge;
} VertexNode, AdjList[MAXSIZE]; // 邻接表

// 邻接表组成的图
typedef struct {
    AdjList adjList;
    int numVertexes, numEdges; // 顶点数量和边数
}GraphAdjList;

int visited[MAXSIZE]; // 记录该结点有没有被访问

// 创建邻接表图
void createGraphAdjList(GraphAdjList *G){
    int i, j, k, w;
    EdgeNode *e; // 边
    // 输入顶点数和边数
    scanf("%d %d", &G->numVertexes, &G->numEdges);
    // 初始化邻接表
    for (i = 0; i < G->numVertexes; i++) {
        G->adjList[i].firstEdge = NULL;
        scanf("%c", &G->adjList[i].data); // 这种就很顺了
    }
    // 输入边信息
    for (k = 0; k < G->numEdges; k++){
        scanf("%d %d %d", &i, &j, &w);
        // i到j算一条边，i开头，j结尾
        e = (EdgeNode *)malloc(sizeof(EdgeNode));
        e->adjvex = j;
        e->weight = w;
        e->next = G->adjList[i].firstEdge; // 头插法
        G->adjList[i].firstEdge = e;
        // 因为是无向图，所以j到i也得来一遍
        e = (EdgeNode *)malloc(sizeof(EdgeNode));
        e->adjvex = i;
        e->weight = w;
        e->next = G->adjList[j].firstEdge;
        G->adjList[j].firstEdge = e;
    }

}

// 深度优先搜索
void DFS(GraphAdjList G, int i){
    EdgeNode *p;
    printf("%c ", G.adjList[i].data);
    visited[i] = TRUE;
    p = G.adjList[i].firstEdge;
    while (p){
        if (!visited[p->adjvex])
            DFS(G, p->adjvex); // 对下一个顶点进行递归调用
        p = p->next;
    }
}


void DFSTraverse(GraphAdjList G){
    int i;
    for (i = 0; i < G.numVertexes; i++)
        if (!visited[i]) DFS(G, i);
}












