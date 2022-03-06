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
    struct node *link = (struct node*) malloc(sizeof(struct node));
    link->data = data;
    //point it to old first node
    link->next = head;
    //point first to new first node
    head = link;
    printf("%d pushed\n",data);
}

void main() {
    int c = 1,v;
    printf("enter choice (1,2 & 3 for push, pop & traverse):\n");
    while (c>0 && c<4){
        scanf("%d",&c);
        switch (c){
            case 1:
                printf("enter value: ");
                scanf("%d",&v);
                push(v);
                break;
            case 2:
                pop();
                break;
            case 3:
                print();
        }
    }
}


/*
output
======
enter choice (1,2 & 3 for push, pop & traverse):
1
enter value: 12
12 pushed
1
enter value: 342
342 pushed
1
enter value: 123
123 pushed
3
123, 342, 12, 
2
123 poped
3
342, 12,
*/
