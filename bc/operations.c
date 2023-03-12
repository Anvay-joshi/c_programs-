#include <stdio.h>
#include "numbers.h"
#include "doubly_LL.h"
#include "operations.h"

number add(number n1, number n2){
//    number n3;
    char sum = 0;
    char carry = 0;

    sum = (n1.tail)->data + (n2.tail)->data;
    carry = sum/10;
    sum = sum % 10;

    number n3 = init_number(sum);
    node* temp1 = (n1.tail)->prev;
    node* temp2 = (n2.tail)->prev;
    
    while(temp1 != NULL || temp2 != NULL){
        if(temp1 == NULL && temp2 != NULL){
            sum = (temp2->data + carry);
            carry = sum / 10;
            sum = sum % 10;
            insertDigitAtHead(&n3, sum);
            temp2 = temp2->prev;
        }

        else if(temp1 != NULL && temp2 == NULL){
            sum = (temp1->data + carry);
            carry = sum / 10;
            sum = sum % 10;
            insertDigitAtHead(&n3, sum);
            temp1 = temp1->prev;
        }

        else if(temp1 == NULL && temp2 == NULL && carry != 0){
            insertDigitAtHead(&n3, carry);
        }

        else{
            sum = (temp1->data + temp2->data + carry);
            carry = sum / 10;
            sum = sum % 10;
            insertDigitAtHead(&n3, sum);
            temp1 = temp1->prev;
            temp2 = temp2->prev;

        }
    }
    return n3;
}

number sub(number n1, number n2){
    number n3;
    char diff;
    char borrow;
    node* temp1 = n1.tail;
    node* temp2 = n2.tail;
    if(temp1->data > temp2->data){

    }
    return n3;
}

char greaterMagnitude(number n1, number n2){
    /* 
     *  return 1 if n1 is greater than n2
     *  return 0 if n1 is smaller than n2
     *  return 2 if n1 is equal to n2
     */
    if(n1.size > n2.size){
        return 1;
    }

    else if(n2.size > n1.size){
        return 0;
    }

    else/* if(n1.size == n2.size)*/{
       node* temp1 = (n1.head); 
       node* temp2 = (n2.head); 
       while(temp1 != NULL){
           if(temp1->data > temp2->data){
                return 1;
           } 
           else if(temp1->data < temp2->data){
                return 0;
           } 

           else if(temp1->data == temp2->data){
                temp1 = temp1->next;
                temp2 = temp2->next;
           }

       }
       return 2;
    }

}
