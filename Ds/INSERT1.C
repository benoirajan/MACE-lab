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
  printf("Insert value: ");
  scanf("%d",&a[n]);
  n++;
  printf("Status\n");
  for(i=0;i<n;i++)
    printf("%d  ",a[i]);
  getch();
}