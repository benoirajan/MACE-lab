#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *current = NULL;

//is list empty
int isEmpty() {
    return head == NULL;
}

void del(){
    struct node *tempLink = head;
    if(isEmpty()){
        printf("Stack under-flow\n");
        return;
    }
    head = head->next;
    head->prev = NULL;
    printf("%d deleted\n",tempLink->data);
}

void print() {
    struct node *ptr = head;
//    struct node *ptr2 = head;
    if(isEmpty()){
        printf("Stack is empty!\n");
        return;
    }

    while(ptr != NULL) {
      printf("%d, ",ptr->data);
//      ptr2 = ptr;
      ptr = ptr->next;
    }
//    while(ptr2 != NULL) {
//      printf("%d, ",ptr2->data);
//      ptr2 = ptr2->prev;
//    }
   printf("\n");
}

//insert link at the first location
void insert(int data) {
    struct node *link;
    link = (struct node*) malloc(sizeof(struct node));
    link->data = data;
    link->next = head;
    link->prev = NULL;
    //point first to new first node
    if(head  != NULL)
        head->prev = link;
    head = link;
    printf("%d inserted\n",data);
}

void main() {
    insert(10);
    insert(30);
    insert(20);
    printf("Current state of list:\n");
    print();
    del();
    printf("After deleting, state of list:\n");;
    print();
}


/*
output
======
gcc "4 single linklist stack.c"
10 inserted
30 inserted
20 inserted
Current state of list:
20, 30, 10, 
20 deleted
After deleting, state of list:
30, 10,
*/
