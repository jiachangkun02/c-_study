//
// Created by jiachangkun on 2024/8/12.
//

#ifndef CLION02_QUEUE_H
#define CLION02_QUEUE_H

#endif //CLION02_QUEUE_H

#include <iostream>
#include <assert.h>

using namespace std;

typedef struct QueueNode
{
    int data;
    QueueNode* next;
}qnode;

typedef struct Queue
{
    qnode* head;
    qnode* tail;
}queue;
bool queueempty(queue* qe);
void queueinit(queue* qe);
void pushqueue(queue* qe,int x);
void popqueue(queue* qe);
int queuesize(queue* qe);
void destroy(queue* qe);
int queuefront(queue* qe);
int queueback(queue* qe);

