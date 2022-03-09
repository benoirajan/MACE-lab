#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

int isEmpty() {
    return head == NULL;
}
void del(){
    if(isEmpty()){
        printf("Array ius emptu");
        return;
    }
    struct node *tempLink = head;
    head = head->next;
    printf("%d deleted\n",tempLink->data);
}

void print() {
    if(isEmpty()){
        printf("Array ius emptu\n");
        return;
    }
    struct node *ptr = head;
    while(ptr != NULL) {
      printf("%d, ",ptr->data);
      ptr = ptr->next;
   }
   printf("\n");
}

//insert link at the first location
void insert(int data) {
    struct node *link;
    link = (struct node*) malloc(sizeof(struct node));
    link->data = data;
    //point it to old first node
    link->next = head;
    //point first to new first node
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
    del();
    del();
    del();
    insert(12);
    printf("After deleting state of list:\n");
    print();
}


/*
output
======
10 inserted
30 inserted
20 inserted
Current state of list:
20, 30, 10, 
20 deleted
After deleting state of list:
30, 10,
*/
