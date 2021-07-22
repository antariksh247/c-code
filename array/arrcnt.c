#include<stdio.h>
void main()
{
int a[5],i,c=0,x=0,y=0;

printf("please enter the number");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<5;i++)
{
if(a[i]==0)
{
c++;
}
if(a[i]>0)
{
x++;
}
if(a[i]<0)
{
y++;
}
}

printf("\nno of numbers greater than zero:->");
printf("%d\n",x);

printf("\nno of numbers less than zero:->");
printf("%d\n",y);

printf("\nno of number equal to zero:->");
printf("%d\n",c);
}
