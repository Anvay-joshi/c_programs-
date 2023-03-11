#ifndef SINGLY_LL_H_
#define SINGLY_LL_H_

typedef struct node{
    int data;
    struct node* next;
}node;

node* createNode_SLL(int);
void insertAtTail_SLL(node*, int);
void display_SLL(node*);
void insertAtHead_SLL(node** , int);
void insertAtPosition_SLL(node** , int , int );
void deleteHead_SLL(node**);
void deleteTail_SLL(node**);

#endif
