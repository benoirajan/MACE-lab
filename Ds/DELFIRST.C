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

  //deleting from first;
  printf("%d is deleted!\n",a[0]);
  for(i=1;i<n;i++)
    a[i-1]=a[i];
  n--;

  printf("Status\n");
  for(i=0;i<n;i++)
    printf("%d  ",a[i]);
  getch();
}