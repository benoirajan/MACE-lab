
#include <stdio.h>  
  
# define max 4
int queue[max]; 
int front=-1;  
int rear=-1;  

void enqueue(int element)  
{  
    if(front==-1 && rear==-1){  
        front=0;  
        rear=0;  
        queue[rear]=element;  
    }  
    else if((rear+1)%max==front){  
        printf("Queue is overflow..\n");  
    }  
    else  
    {  
        rear=(rear+1)%max;       // rear is incremented  
        queue[rear]=element;     // assigning a value to the queue at the rear position.  
    }  
}  
  
// function to delete the element from the queue  
int dequeue()  
{  
    if((front==-1) && (rear==-1))  // condition to check queue is empty  
    {  
        printf("Queue is underflow..\n");  
    }  
 else if(front==rear)  
{  
   printf("%d is deleted\n", queue[front]);  
   front=-1;  
   rear=-1;  
}   
else  
{  
    printf("%d is deleted\n", queue[front]);  
   front=(front+1)%max;  
}  
}  
// function to display the elements of a queue  
void display()  
{  
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("Queue is empty..\n");  
    }  
    else { 
        while(i!=rear)  
        {  
            printf("%d, ", queue[i]);  
            i=(i+1)%max;  
        }  
        printf("%d,", queue[i]); 
    }  
    printf("\n");
}  

void search(){
    int n,l=1;
    printf("Enter an item: ");
    scanf("%d",&n);
    int i=front;  
    if(front==-1 && rear==-1) {  
        printf("Queue is empty..\n");  
    }  
    else {  
        while(i!=rear) {  
            if(queue[i]==n){
                printf("item found loc: %d\n",l);  
                return;
            }
            i=(i+1)%max; 
            l++;
        }
        if(queue[i]==n){
            printf("item found loc: %d\n",l);  
            return;
        }
        printf("Not found\n");
    }  
}
int main()  
{  
    int choice=1,x;   // variables declaration  
    printf("1 insert, 2 Delete, 3 display, 4 search: \n"); 
    while(choice<5 && choice>0)   // while loop  
    { 
    printf("> ");
    scanf("%d", &choice);
    switch(choice)  
    {  
          
        case 1:  
      
        printf("Enter the item: ");  
        scanf("%d", &x);  
        enqueue(x);  
        break;  
        case 2:  
        dequeue();  
        break;  
        case 3:  
        display();  
        break;
        case 4:
        search();
  
    }}  
    printf("Thank you...\n");
    return 0;  
}  


/*
output##################
1 insert, 2 Delete, 3 display, 4 search: 
> 1
Enter the item: 1
> 1
Enter the item: 2
> 1
Enter the item: 3
> 1
Enter the item: 4
> 2
1 is deleted
> 3
2, 3, 4,
> 4
Enter an item: 4
item found loc: 4

Thank you...
*/
