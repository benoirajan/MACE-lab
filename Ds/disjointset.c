#include "stdio.h"
#include "conio.h"
#include "stdlib.h"

struct djset{
    int data;
    struct djset *n;
};

struct djset* a[10];
int s = 0;

void make(){
    int d;
    printf("Enter v: ");
    scanf("%d",&d);
    a[s]=(struct djset *) malloc(sizeof(struct djset));
    a[s]->data = d;
    a[s++]->n = NULL;
}

void trav(struct djset* set){
    while(set!=NULL){
        printf("%d, ",set->data);
        set=set->n;
    }
}

int find(int n){
    int i;
    struct djset *set;
    for(i=0;i<s;i++){
        set = a[i];
        while(set!=NULL){
            if(set->data==n)
                return i;
            set=set->n;
        }
    }
    return -1;
}


void uni(){
    int i,c,b;
    struct djset* set;
    printf("enter 2 el: ");
    scanf("%d",&b);
    scanf("%d",&c);
    b = find(b);
    c = find(c);
    if(b != c && b > -1 && c>-1){
        set = a[c];
        while(set->n!=NULL)
            set=set->n;
        set->n = a[b];
        for(i=b;i<s;i++)
            a[i]=a[i+1];
        s--;
    }
    else printf("Error\n");
}

void show(){
    int i;
    for(i=0;i<s;i++){
        printf("{");
        trav(a[i]);
        printf("},  ");
    }
    printf("\n");
}

void main(){
    int i=1,k;
    while(i>0&&i<5){
        printf(">");
        scanf("%d",&i);
        switch(i){
            case 1:
                make();
                break;
            case 2:
                printf("En find: ");
                scanf("%d",&k);
                printf("%d\n",a[find(k)]->data);
                break;
            case 3:
                uni();
                break;
            case 4:
                show();
        }
    }
}
/*
output
======
>1
Enter v: 1
>1
Enter v: 2
>3
enter 2 el: 1 2
>4
{2, 1, },  
>1
Enter v: 3
>1
Enter v: 4
>4
{2, 1, },  {3, },  {4, },  
>3
enter 2 el: 3 4
>4
{2, 1, },  {4, 3, },  
>3
enter 2 el: 1 3
>4
{4, 3, 2, 1, },  
>2
En find: 1
4
>2
En find: 2
4
>1 
Enter v: 5
>4
{4, 3, 2, 1, },  {5, },  
>1
Enter v: 6
>3
enter 2 el: 5 6
>4
{4, 3, 2, 1, },  {6, 5, },  
*/