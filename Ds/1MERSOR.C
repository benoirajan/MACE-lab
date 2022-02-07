#include<stdio.h>
#include<conio.h>
void main()
{
  int b[30],a[30],c[30],n,n2,t,i,j,k;
  //array init
  //n = n2 = 4
  //clrscr();
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

    printf("elements in a\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
        
    printf("\nelements in b\n");
    for(i=0;i<n2;i++)
        printf("%d ",b[i]);
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
        
    while(j<n){
        c[i++]=a[j++];
    }
    while(k<n2){
        c[i++]=b[k++];
    }
  printf("\nStatus:\n");
  for(i=0;i<n+n2;i++)
    printf("%d  ",c[i]);
  getch();
}


/*
Enter the number of elements: 3
Enter the elements
1 2 3
Enter the number of elements in 2nd array: 4
Enter the elements
4 5 6 7
elements in a
1 2 3 
elements in b
4 5 6 7 
Status:
1  2  3  4  5  6  7  
*/
