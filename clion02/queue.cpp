#include "queue.h"

void queueinit(queue* qe)
{
    assert(qe);
    qe->head=qe->tail= nullptr;
}


void pushqueue(queue* qe,int x){
    assert(qe);

    qnode* newnode=(qnode*) malloc(sizeof(qnode));
    newnode->next= nullptr;
    newnode->data=x;
    if(qe->head== nullptr){

        qe->tail=qe->head=newnode;
    }

    qe->tail->next=newnode;
    qe->tail=newnode;
}
void popqueue(queue* qe){
    assert(qe);
    assert(qe->head);
    qnode* next=qe->head->next;
    free(qe->head);
    qe->head=next;
    if(qe->head== nullptr)
    {
        qe->tail= nullptr;
    }
}
int queuesize(queue* qe){
    assert(qe);
    assert(qe->head);
    int count=0;
    while (qe->head)
    {
        count++;
        qe->head=qe->head->next;
    }
    return count;
}
void destroy(queue* qe){
    qnode* cur=qe->head;
    while(cur!= nullptr)
    {
        qnode* next=cur->next;
        free(cur);
        cur=next;
    }
    qe->head=qe->tail= nullptr;
}

int queuefront(queue* qe){
    assert(qe->head);
    return qe->head->data;
}
int queueback(queue* qe){
    assert(qe->tail);
    return qe->tail->data;
}

bool queueempty(queue* qe)
{
    return (qe->head == nullptr);
}
