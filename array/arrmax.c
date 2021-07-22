#include<stdio.h>
void main()
{
int a[5],i,x;
printf("\nTAKE THE NUMBER:");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("DISPLAY:->\n");
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
x=a[0];
for(i=1;i<5;i++)
{
if(x<a[i])
{
x=a[i];
}
}
printf("printf max element\n");
printf("%d",x);
}
