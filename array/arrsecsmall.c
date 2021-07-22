//second smallest element 

#include<stdio.h>
void main()
{
int a[5],i,prev,temp;

printf("Take the element array");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}

prev=a[0];
for(i=0;i<5;i++)
{
if(prev>a[i])
{
temp=prev;
prev=a[i];
}
}
printf("Second small element:->");
printf("%d",temp);
}
