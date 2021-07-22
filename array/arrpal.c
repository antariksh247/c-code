#include<stdio.h>
void main()
{
int a[5],temp,sum=0,i,x;
printf("take the number\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<5;i++)
{
sum=0;
x=a[i];
while(x>0)
{
temp=x%10;
x=x/10;
sum=sum*10+temp;
}
if(sum==a[i])
{
printf("\nENTER THE POSITION OF NUMBER WHICH IS PALINDROME:->");
printf("%d",i);
}
}
}
