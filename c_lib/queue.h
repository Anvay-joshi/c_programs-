#include "singly_LL.h"

#ifndef QUEUE_H_
#define QUEUE_H_

typedef struct queue{
    node* front;
    node* rear;
    int length;
}queue;

void display_queue(queue);
void enqueue(queue*, int);
void dequeue(queue*);

#endif

