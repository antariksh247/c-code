//insert the element in array

#include<stdio.h>
void main()
{
int a[20],i,j,n,pos,val;

printf("take the size of array\n");
scanf("%d",&n);

printf("take the element of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("Original array:\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}

printf("Enter the position and value at which you want to insert element\n");
scanf("%d%d",&pos,&val);
n++;
for(i=n;i>pos-1;i--)
{
a[i]=a[i-1];
}
a[pos]=val;

printf("New array:\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
