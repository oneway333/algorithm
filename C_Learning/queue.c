//
// Created by oneway on 2024/2/4.
//

#include <stdio.h>
#include "queue.h"


#define OK 1
#define ERROR 0



// 初始化
Status initQueue(SqQueue *s){
    s->front = 0;
    s->rear = 0;
    return OK;
}

// 入队
Status enQueue(SqQueue *s, QElemType e){
    if ((s->rear + 1) % MAXSIZE == s->front) return ERROR;// 或者queueLength(s) >= MAXSIZE 应该也是对的
    s->data[s->rear] = e;
    s->rear = (s->rear + 1) % MAXSIZE; // 因为是循环，rear可能到开头
    return OK;
}

// 出队
Status deQueue(SqQueue *s, QElemType *e){
    if (s->rear == s->front) return ERROR;
    *e = s->data[s->front];
    s->front = (s->front + 1) % MAXSIZE; // 同上
    return OK;
}

// 队列长度
int queueLength(SqQueue *s){
    return (s->rear - s->front + MAXSIZE) % MAXSIZE;
}

void show(SqQueue *s){
    int i;
    if (s->rear == s->front) return;
    if (s->rear > s->front)
        for (i = s->front; i < s->rear; i++)
            printf("%d\t", s->data[i]);
    else if (s->rear < s->front)
        for (i = s->front; i < (i < MAXSIZE ? MAXSIZE : s->rear); i = (i + 1) % MAXSIZE)
            printf("%d\t", s->data[i]);
}

