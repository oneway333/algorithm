#include <stdio.h>
#include <stdlib.h>

#define OVERFLOW 0

typedef char TElemType;
typedef enum {Link, Thread} PointerTag; // Link == 0，表示二叉树指针，Thread == 1，表示循环链表的指针

// 到线索二叉树了

typedef struct bThrNode{
    TElemType data;
    struct bThrNode *left, *right;
    PointerTag ltag, rtag; // 标识left和right是什么指针
}BThrNode, *BThrTree;

BThrTree pre; // 保存前一个结点的状态

// 中序创建线索二叉树
void inOrderCreateBThrTree(BThrTree *tree){
    char ch;
    scanf("%c", &ch);
    if (ch == '#') *tree = NULL;
    else{
        *tree = (BThrTree)malloc(sizeof(BThrNode));
        if (!*tree) exit(OVERFLOW);
        (*tree)->data = ch;
        (*tree)->ltag = Link;
        (*tree)->rtag = Link;
        inOrderCreateBThrTree(&(*tree)->left);
        inOrderCreateBThrTree(&(*tree)->right);
    }
}

// 中序初始化线索二叉树
// 而且不像那个《大话数据结构》一样，其实就是中序初始化线索二叉树最好做！
void inThreading(BThrTree *tree){
    if (*tree) {
        inThreading(&(*tree)->left); // 先定位到最左边的结点
        if (!(*tree)->left) { // 如果结点没有左子结点，那么前继结点一定为pre，ltag就是链表结点
            (*tree)->left = pre;
            (*tree)->ltag = Thread;
        }
        if (!pre->right) { // 如果前继结点没有右子结点，那么前继结点的后继结点一定为当前的tree
            pre->right = *tree;
            pre->rtag = Thread;
        }
        pre = *tree; // 在搞右子树的时候，更新下前继结点
        inThreading(&(*tree)->right); // 在去搞右子树
    }
}

// 在线索二叉树的基础上添加几个指针
void inThreading_sec(BThrTree *tree){
    (*tree)->ltag = Link;
    (*tree)->rtag = Thread;
    BThrTree p = (*tree)->left;
    while (!p->left) p = p->left; // 找到最左边的结点
    p->left = *tree; // 将开头元素指向头指针
    p = (*tree)->left;
    while (!p->right) p = p->right; // 找到最右边的结点
    (*tree)->right = p;
    p->right = *tree;
}

// 中序遍历二叉树
void inOrderTraverse(BThrTree tree){
    if (tree == NULL) return;
    inOrderTraverse(tree->left);
    printf("%c %d %d\n", tree->data, tree->ltag, tree->rtag);
    inOrderTraverse(tree->right);
}

// 用循环链表的方式遍历线索二叉树
void inOrderTraverse_thr(BThrTree tree){ // 传入一个头指针
    BThrTree p = tree->left;
    while (p != tree) { // 当p和头指针相遇，证明到头了
        while (p->ltag == Link) // 每一次找到最左边的结点
            p = p->left;
        printf("%c", p->data); // 找到了开头
        while (p->rtag == Thread && p->right != tree){
            p = p->right;
            printf("%c", p->data); // 如果是链表的形式，那么就通过right来进行偏移
        }
        p = p->right; // 因为时模拟链表，所以从左往右
    }
}

int main(){
    BThrTree tree;
    tree = (BThrTree)malloc(sizeof(BThrNode));
    inOrderCreateBThrTree(&tree->left); // 创建以tree为头指针的一个线索二叉树
    inThreading(&tree); // 第一步初始化
    // 继续对线索二叉树进行一些配置
    inThreading_sec(&tree);
//    inOrderTraverse(tree);
    inOrderTraverse_thr(tree);
    return 0;
}