#include <stdio.h>
#include "queue.h"

// 邻接矩阵

typedef char VertexType; // 节点类型
typedef int EdgeType; // 边类型
typedef int BOOLEAN;
#define MAXVEX 100  // 最大节点数
#define INFINITY 65535 // 无穷
#define FALSE 0
#define TRUE 1

typedef struct {
    VertexType vexs[MAXVEX];
    EdgeType arc[MAXVEX][MAXVEX];
    int numVertexes, numEdges; // 顶点数量，边数量
} MGraph; // 邻接矩阵

int visited[MAXVEX]; // 某结点是否被访问过

// 创建邻接矩阵
void CreateMGraph(MGraph *G){
    int i, j, k, w;
    // 输入图的顶点数量和边数
    scanf("%d %d", &G->numVertexes, &G->numEdges);
    // 初始化图
    i = 0;
    while (i != G->numVertexes){
        scanf("%c", &G->vexs[i]); // 每个顶点的名字
        if (G->vexs[i] == '\n') continue;
        i++;
    }
    for (i = 0; i < G->numVertexes; i++){
        for (j = 0; j < G->numVertexes; j++)
            G->arc[i][j] = INFINITY;
    }

    // 输入图中的权值
    for (k = 0; k < G->numEdges; k++){
        scanf("%d %d %d", &i, &j, &w);
        G->arc[i][j] = w;
        G->arc[j][i] = w; // 无向图，对称的
    }
}

// 深度优先搜索
// 分了两步，主要怕非完全图，可能会有没有出度的结点
void DFS(MGraph *G, int i){
    int j;
    visited[i] = TRUE;
    printf("%c ", G->vexs[i]);
    for (j = 0; j < G->numVertexes; j++)
        if (!visited[j] && G->arc[i][j] == 1) DFS(G, j); // 当结点没有被访问，并且边不为0或INFINITY时，进入
}

void DFSTraverse(MGraph *G){
    int i;
    for (i = 0; i < G->numVertexes; i++)
        if (!visited[i]) DFS(G, i);
}

void BFSTraverse(MGraph *G){
    SqQueue Q;

}

int main(){
    MGraph G;
    CreateMGraph(&G);
    DFSTraverse(&G);
    BFSTraverse(&G);
    return 1;
}