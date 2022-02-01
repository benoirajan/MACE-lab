#include<stdio.h>
#include<conio.h>
void main()
{
  int a[30],n,i;
  clrscr();
  printf("Enter a limit: ");
  scanf("%d",&n);
  printf("Enter the values\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  n++;
  for(i=n;i>0;i--)
    a[i]=a[i-1];
  printf("Insert value: ");
  scanf("%d",&a[0]);
  printf("Status\n");
  for(i=0;i<n;i++)
    printf("%d  ",a[i]);
  getch();
}