#include <stdio.h>
#include "singly_LL.h"
#include "queue.h"

queue init_Q(int num){
    queue Q;
    Q.front = createNode_SLL(num);
    Q.length = 1;
    Q.rear = Q.front;

    return Q;
}

void display_queue(queue Q){
    display_SLL(Q.front);
}

void enqueue(queue* Q, int num){
    insertAtTail_SLL(Q->rear, num);
    Q->length ++;
    Q->rear = (Q->rear)->next;
}

void dequeue(queue* Q){
    deleteHead_SLL(&(Q->front));
    Q->length -=1;
}

int front_queue(queue Q){
    return ((Q.front)->data);
}

//int main(){
//    queue Q = init_Q(1);
//    enqueue(&Q, 2);
//    enqueue(&Q, 3);
//    enqueue(&Q, 4);
//    enqueue(&Q, 5);
//    display_queue(Q);
//    printf("\n");
//    dequeue(&Q);
//    display_queue(Q);
//    printf("\n");
//    printf("%d",front_queue(Q));
//
//    return 0;
//}
