#include <stdio.h>
#include <stdlib.h>
#include "singly_LL.h"

node* createNode_SLL(int num){
    node* temp = (node*) malloc(sizeof(node));
    temp->data = num;
    temp->next = NULL;
    return temp;
}

void insertAtTail_SLL(node* head, int num){
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    node* newNode = createNode_SLL(num);
    temp->next = newNode;
    //free(temp);
    return;
}

void display_SLL(node* head){
    node* temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
   }
    free(temp);
}

void insertAtHead_SLL(node** head, int num){
    node* temp = createNode_SLL(num);
    temp->next = (*head);
    (*head) = temp;

}

void insertAtPosition_SLL(node** head, int num, int pos){
    if(pos == 0){
        insertAtHead_SLL(head, num);
        return;
    }
    
    node* temp = (*head);
    int i = 1;
    while(i < pos && temp-> next != NULL){
        temp = temp->next;        
        i++;
    }
    node* newNode = createNode_SLL(num);
    newNode->next = temp->next;
    temp->next = newNode;
    return; 
}

void deleteAtPosition_SLL(node** head, int pos){
    if(pos == 0){
        deleteHead_SLL(head);
        return;
    }

    int i = 1;
    node* temp = (*head);
    while(i < pos && (temp->next)->next != NULL){
        temp = temp->next;
    }
    
    node* temp3 = temp->next;
    temp->next = temp3->next;
    free(temp3);
}

void deleteHead_SLL(node** head){
    node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deleteTail_SLL(node** head){
    node* temp = *head;
    if(temp->next == NULL){
        *head = NULL;
        return ;
    }

    while((temp->next)->next != NULL){
        temp = temp->next;
    }
    node* temp2 = temp->next;
    temp->next = NULL;
    free(temp2);
}
