#include "conio.h"
#include "stdio.h"

struct node{
  int data;
  struct node *left, *right;
};
struct node *root=NULL;

//insertion
void insert(int d){
  struct node *ptr, *t;
  if(root==NULL){
    root = (struct node *)malloc(sizeof(struct node));
    root->data = d;
    return;
  }
  else{
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = d;
    t = root;
    while(t!=NULL){
      if(t->data>d)
	 if(t->left == NULL){
	 //insert left
	    t->left = ptr;
	    break;
	 }
	 else
	    t=t->left;
      else if(t->right == NULL){
	 //insert right
	 t->right = ptr;
	 break;
      }
      else
	 t=t->right;
    }
  }
}
void traverse(struct node *rt){
  if(rt!=NULL){
    traverse(rt->left);
    printf("%d ",rt->data);
    traverse(rt->right);
  }
}

void main(){
  int c=1,n;
  clrscr();
  printf("Enter choice 1-4\n");
  while(c<4&&c>0){
    scanf("%d",&c);
    switch(c){
      case 1:
        printf("Enter an item: ");
        break;
      case 2:
        traverse(root);
    }
  }
  getch();
}