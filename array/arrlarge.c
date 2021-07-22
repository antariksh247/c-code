//second last large number

#include<stdio.h>
void main()
{
int a[6],i,prev,next;

printf("Take the number\n");
for(i=0;i<6;i++)
{
scanf("%d",&a[i]);
}
prev=a[0];
for(i=0;i<6;i++)
{
if(prev<a[i])
{
next=prev;
prev=a[i];
}
}
printf("Second last maximum number:->");
printf("%d",next);
}   
