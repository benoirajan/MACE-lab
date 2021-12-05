#include<stdio.h>
#include<conio.h>
void main()
{
  int b[30],a[30],c[30],n,n2,t,i,j,k;
  clrscr();
  //array init
  //n = n2 = 4
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  //array init2
  printf("Enter the number of elements in 2nd array: ");
  scanf("%d",&n2);
  printf("Enter the elements\n");
  for(i=0;i<n2;i++)
    scanf("%d",&b[i]);

  //merging
  j = k = i = 0;
  while(j<n&&k<n2)
     if(a[j]>b[k])
	c[i++] = b[k++];
     else if(a[j]==b[k]){
	c[i++] = a[j++];
	c[i++] = b[k++];
     }
     else
	c[i++]=a[j++];
  printf("Status:\n");
  for(i=0;i<n+n2;i++)
    printf("%d  ",c[i]);
  getch();
}
