#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define OVERFLOW 0

typedef int status;
typedef int qElemType;

// 其实主要逻辑没啥难理解

typedef struct qNode {
    qElemType data;
    struct qNode *next;
} QNode, *QueuePtr; // QNode是独立的结点，QueuePtr是指向结点的指针

typedef struct {
    QueuePtr front, rear; // 指向队列头和尾的指针
}LinkQueue;

// 入队
status enQueue(LinkQueue *lq, qElemType e) {
    QueuePtr t = (QueuePtr)malloc(sizeof(QNode));
    if (!t) exit(OVERFLOW);
    t->data = e;
    t->next = NULL;
    lq->rear->next = t; // 总结来说就是尾插法，lq的rear一开始指向头结点
    lq->rear = t;
    return OK;
}

// 出队
status deQueue(LinkQueue *lq, qElemType *e){
    if (lq->rear == lq->front) return ERROR; // 队列没有元素
    QueuePtr p = lq->front->next;
    // 队列只有一个元素，必须这么做，不然rear被free之后，就变成野指针了，再次进行enQueue的时候，就会有lq->rear为NULL的问题
    if (p == lq->rear) lq->rear = lq->front;
    *e = p->data;
    lq->front->next = p->next;
    free(p);
    return OK;
}

void show(LinkQueue *lq){
    QueuePtr p = lq->front->next;
    while (p) {
        printf("%d\t", p->data);
        p = p->next;
    }
}

int main(){
    LinkQueue lq;
    QueuePtr p = (QueuePtr)malloc(sizeof(QNode));
    p->data = 0;
    p->next = NULL;
    lq.front = p;
    lq.rear = p;
    int i, e;
    for (i = 0; i < 10; i++) enQueue(&lq, i + 1);
    show(&lq);
    putchar('\n');
    deQueue(&lq, &e);
    show(&lq);
    putchar('\n');
    printf("%d\n", e);
    enQueue(&lq, 100);
    show(&lq);
    return 0;
}