/*
set operation using bit string
(union,intersection,difference)
*/
#include<stdio.h>
#include<conio.h>
int i=0,j,t,n,n1,n2,u[10];
short int
a[]={0,0,0,0,0,0,0,0,0,0},
b[]={0,0,0,0,0,0,0,0,0,0};
void main(){
  int val;
  clrscr();
  printf("Enter number of elements: ");
  scanf("%d",&n);
  printf("Enter elements in U\n");
  for(i=0;i<n;i++)
     scanf("%d",&u[i]);

  printf("Enter number of elements: ");
  scanf("%d",&n1);
  printf("Enter elements in A\n");
  //insert a and b
  for(i=0;i<n1;i++){
     scanf("%d",&t);
     for(j=0;j<n;j++)
       if(u[j]==t)
	   a[j]=1;
  }

  printf("Enter number of elements: ");
  scanf("%d",&n2);
  printf("Enter elements in B\n");
  for(i=0;i<n2;i++){
     scanf("%d",&t);
     for(j=0;j<n;j++)
       if(u[j]==t)
	   b[j]=1;
  }
  printf("A U B: ");
  for(i=0;i<n;i++)
     if(a[i]|b[i])
       printf("%d ",u[i]);
  //intersection
  printf("\nA n B: ");
  for(i=0;i<n;i++)
     if(a[i]&b[i])
       printf("%d ",u[i]);
  //difference
  printf("\nA - B: ");
  for(i=0;i<n;i++)
     if((a[i]|b[i])-b[i])
       printf("%d ",u[i]);
  getch();
}

