#include<stdio.h>
void main()
{
 int a[5],b[5],i,j;
 printf("Enter the elements in array");
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<5;i++)
 {
 b[i]=a[i];
 
 }
 printf("Copied array is:\n");
 for(i=0;i<5;i++)
 printf("%d\n",b[i]);
 
}
