//Delete the element

#include<stdio.h>
void main()
{
int a[20],i,n,pos;

printf("Enter the size of array\n");
scanf("%d",&n);

printf("Take the element\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("Original array:\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}

printf("Enter the position of element which have delete;->");
scanf("%d",&pos);

for(i=pos;i<n;i++)
{
a[i]=a[i+1];
}
printf("New array:\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
