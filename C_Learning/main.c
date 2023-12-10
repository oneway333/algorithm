#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0

typedef int SElemType;
typedef int Status;

typedef struct stackNode{
    SElemType data;
    struct stackNode *next;
} StackNode, *LinkStackPtr;

typedef struct {
    LinkStackPtr top;
    int count;
} LinkStack;

// 入栈
Status Push(LinkStack *LS, SElemType e){
    LinkStackPtr p = (LinkStackPtr)malloc(sizeof(StackNode));
    /*
     * 这里不能再用*p，要超脱于习惯，要根据语义来，这里的LinkStackPtr已经是指针类型了，再用*就成了指向指针的指针了。
     * 为什么习惯于用*p，果然还是无脑去写代码导致的，写的时候还是得带些包脑子的
     *
    */
    p->data = e; // 头插法
    p->next = LS->top;
    LS->top = p;
    LS->count++; // 用count来标识
    return OK;
}

// 出栈
Status Pop(LinkStack *LS, SElemType *e){
    if (LS->count <= 0) return ERROR;
    LinkStackPtr p = LS->top;
    *e = LS->top->data;
    LS->top = LS->top->next;
    free(p);
    LS->count--;
    return OK;
}

void show(LinkStackPtr LSP){
    if (!LSP) return; // 两天不写逻辑，直接把LSP和!LSP意义搞反了，下次为了正确还是先写上吧，太尴尬了。。。
    show(LSP->next);
    printf("%d\t", LSP->data);
}

int main(){
    LinkStack LS = {NULL, 0};
    int i, e;
    for (i = 0; i < 10; i++) Push(&LS, i + 1);
    show(LS.top);

    putchar('\n');
    Pop(&LS, &e);

    printf("%d\n", e);
    show(LS.top);
}


