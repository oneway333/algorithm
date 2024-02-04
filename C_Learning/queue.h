//
// Created by oneway on 2024/2/4.
//

#ifndef C_LEARNING_QUEUE_H
#define C_LEARNING_QUEUE_H
#define MAXSIZE 1000

typedef int QElemType;
typedef int Status;

typedef struct {
    QElemType data[MAXSIZE];
    int front, rear;
} SqQueue;  // 用下标的数量关系控制循环，rear为最后一个元素的后一个元素

extern Status initQueue();
extern Status enQueue();
extern int queueLength();
static void show();

#endif //C_LEARNING_QUEUE_H
