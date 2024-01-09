#include <stdio.h>

// 邻接矩阵

typedef char VertexType; // 节点类型
typedef int EdgeType; // 边类型
#define MAXVEX 100  // 最大节点数
#define INFINITY 65535 // 无穷

typedef struct {
    VertexType vexs[MAXVEX];
    EdgeType arc[MAXVEX][MAXVEX];
    int numVertexes, numEdges; // 顶点数量，边数量
} MGraph; // 邻接矩阵

// 创建邻接矩阵
void CreateMGraph(MGraph *G){
    int i, j, k, w;
    // 输入图的顶点数量和边数
    scanf("%d %d", &G->numVertexes, &G->numEdges);
    // 初始化图
    for (i = 0; i < G->numVertexes; i++){
        scanf("%c", &G->vexs[i]); // 每个顶点的名字
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