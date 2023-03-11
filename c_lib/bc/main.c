#include <stdio.h>
#include "numbers.h"
#include "doubly_LL.h"
#include "operations.h"

int main(){
    number n1 = init_number(1);
    insertDigitAtEnd(&n1, 2);
    insertDigitAtEnd(&n1, 3);
    displayNumber(n1);
    displayNumberReverse(n1);

    number n2 = init_number(4);
    insertDigitAtEnd(&n2, 5);
    insertDigitAtEnd(&n2, 7);
    displayNumber(n2);
    displayNumberReverse(n2);

    number n3 = add(n1, n2);
    displayNumber(n3);
    printf("\n\n");
    char flag = greaterMagnitude(n2,n1) ;
    printf("flag = %d",flag);
    return 0;
}
