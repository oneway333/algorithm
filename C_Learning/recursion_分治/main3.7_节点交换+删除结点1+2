/*
 *
3.7 节点交换
给定一个链表的头指针head，要求两两交换链表中相邻的节点。
输入：head = [1,2,3,4]
输出：[2,1,4,3]
输入：head = [1,2,3,4,5]
输出：[2,1,4,3,5]
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int n;
    struct node *next;
} Node;

Node * newNode(int n){
    Node *node = (Node *)malloc(sizeof(Node));
    node->n = n;
    node->next = NULL;
    return node;
}

Node *createList(int nums[], int n){
    Node *head = NULL;
    Node *p = head;
    for (int i = 0; i < n; ++i) {
        Node *t = newNode(nums[i]);
        if (head == NULL) head = t;
        else p->next = t;
        p = t;
    }
    return head;
}

void show(Node *head){
    while (head != NULL){
        printf("%d\t", head->n);
        head = head->next;
    }
}

Node *swap(Node *head) {
    if (head == NULL) return NULL;
    if (head->next == NULL) return head;
    Node *p = head->next;
    head->next = swap(p->next);
    p->next = head;
    return p;
}

Node *delete(Node *head, int k){
    if (head == NULL) return NULL;
    head->next = delete(head->next, k);
    return head->n == k ? head->next : head;
}

Node *delete2(Node *head){
    if (head == NULL) return NULL;
    if (head->next == NULL) return head;
    head->next = delete2(head->next);
    return head->next->n > head->n ? head->next : head;
}

int main(){
    int nums[] = {5,2,13,3,8};
    Node *head = createList(nums, sizeof(nums) / sizeof(int));

//    show(swap(head));
//    show(delete(head, 7));
    show(delete2(head));
    return 0;

}