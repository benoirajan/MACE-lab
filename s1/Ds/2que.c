
#include <stdio.h>  
  
# define max 4
int queue[max]; 
int front=-1;  
int rear=-1;  

void enqueue(int element)  
{  
    if(front==-1 && rear==-1)   // condition to check queue is empty  
    {  
        front=0;  
        rear=0;  
        queue[rear]=element;  
    }  
    else if((rear+1)%max==front)  // condition to check queue is full  
    {  
        printf("\nQueue is overflow..");  
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
        printf("\nQueue is underflow..");  
    }  
 else if(front==rear)  
{  
   printf("\n%d is deleted", queue[front]);  
   front=-1;  
   rear=-1;  
}   
else  
{  
    printf("\n%d is deleted", queue[front]);  
   front=(front+1)%max;  
}  
}  
// function to display the elements of a queue  
void display()  
{  
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty..");  
    }  
    else { 
        while(i!=rear)  
        {  
            printf("%d, ", queue[i]);  
            i=(i+1)%max;  
        }  
        printf("%d,", queue[i]); 
    }  
}  

void search(){
    int n;
    printf("Enter an item: \n");
    scanf("%d",&n);
    int i=front;  
    if(front==-1 && rear==-1) {  
        printf("\n Queue is empty..");  
    }  
    else {  
        while(i!=rear) {  
            if(queue[i]==n){
                printf("item found loc: %d",i+1);  
                return;
            }
            i=(i+1)%max;  
        }
        if(queue[i]==n){
            printf("item found loc: %d",i+1);  
            return;
        }
        printf("Not found");
    }  
}
int main()  
{  
    int choice=1,x;   // variables declaration  
      
    while(choice<5 && choice>0)   // while loop  
    {  
    printf("\n================================================="); 
    printf("\nPress 1 insert, 2 Delete, 3 display, 4 search: ");  
    scanf("%d", &choice);
    switch(choice)  
    {  
          
        case 1:  
      
        printf("\nEnter the item: ");  
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
    printf("Thank you...");
    return 0;  
}  


/*
output##################
=================================================
Press 1 insert, 2 Delete, 3 display, 4 search: 1
Enter the item: 3
=================================================
Press 1 insert, 2 Delete, 3 display, 4 search: 1
Enter the item: 4
=================================================
Press 1 insert, 2 Delete, 3 display, 4 search: 1
Enter the item: 1
=================================================
Press 1 insert, 2 Delete, 3 display, 4 search: 1
Enter the item: 6
=================================================
Press 1 insert, 2 Delete, 3 display, 4 search: 3
3, 4, 1, 6,
=================================================
Press 1 insert, 2 Delete, 3 display, 4 search: 2
3 is deleted
=================================================
Press 1 insert, 2 Delete, 3 display, 4 search: 4
Enter an item: 2
Not found
=================================================
Press 1 insert, 2 Delete, 3 display, 4 search: 1
Enter the item: 100
=================================================
Press 1 insert, 2 Delete, 3 display, 4 search: 3
4, 1, 6, 100,
=================================================
Press 1 insert, 2 Delete, 3 display, 4 search: 22
Thank you...
*/
