#include<stdio.h>
#include<conio.h>
void main()
{
  int a[30],n,p,i;
  clrscr();
  printf("Enter a limit: ");
  scanf("%d",&n);
  printf("Enter the values\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  n++;
  printf("Insert pos: ");
  scanf("%d",&p);
  for(i=n;i>p;i--)
    a[i]=a[i-1];
  printf("Insert value: ");
  scanf("%d",&a[p]);
  printf("Status\n");
  for(i=0;i<n;i++)
    printf("%d  ",a[i]);
  getch();
}