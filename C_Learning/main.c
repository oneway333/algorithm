#include <stdio.h>

#define MAX_TREE_SIZE 100

typedef int TElemType;

// 树的孩子兄弟表示法

// 这里就可以一个了，因为纯粹是用链表串联起来的，没有数组的结构
// 所以根结点就是头结点的位置，数量可能就要遍历全表了，要不然就再搞个
typedef struct cSNode{
    TElemType data;
    struct cSNode *fristChild, *rightSib; // 当前结点的第一个孩子，第一个兄弟
    struct cSNode *parent; // 结点的双亲？根结点咋办嘞。。。
}CSNode, *CSTree;

typedef struct {
    CSTree root; // 表示根结点位置
    int n; // 表示结点数量
}CSTrees;