#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//is list empty
int isEmpty() {
    return head == NULL;
}

void pop(){
    if(isEmpty()){
        printf("Stack under-flow\n");
        return;
    }
    struct node *tempLink = head;
    head = head->next;
    printf("%d poped\n",tempLink->data);
}

void print() {
    if(isEmpty()){
        printf("Stack is empty!\n");
        return;
    }
    struct node *ptr = head;
    while(ptr != NULL) {
      printf("%d, ",ptr->data);
      ptr = ptr->next;
   }
   printf("\n");
}

//push link at the first location
void push(int data) {
    struct node *link;
    link = (struct node*) malloc(sizeof(struct node));
    link->data = data;
    //point it to old first node
    link->next = head;
    //point first to new first node
    head = link;
    printf("%d pushed\n",data);
}

void main() {
    push(10);
    push(30);
    push(20);
    printf("Current state of stack:\n");
    print();
    pop();
    printf("After deleting state of stack:\n");;
    print();
}


/*
output
======
10 pushed
30 pushed
20 pushed
Current state of stack:
20, 30, 10, 
20 poped
After deleting state of stack:
30, 10
*/
