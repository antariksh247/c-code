//Alternate element 

#include<stdio.h>
void main()
{
int a[10],i;

printf("Take the element\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}

printf("Original array:\n");
for(i=0;i<10;i++)
{
printf("%d\n",a[i]);
}

printf("Alternate element of array\n");
for(i=0;i<10;i=i+2)
{
printf("%d\n",a[i]);
}
}
