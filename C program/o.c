//check wheather number is armstrong or not

#include<stdio.h>
void main()
{
int i,j,n,c=0,pro,rem,x=1,sum=0,temp,temp1;
printf("\nENTER THE NUMBER:-");
scanf("%d",&n);
temp=n;
temp1=n;
while(n>0)
{
n=n/10;
c++;
}

while(temp>0)
{
pro=1;
rem=temp%10;
temp=temp/10;
for(i=0;i<c;i++)
{
pro=pro*rem;
}
sum=sum+pro;
}

if(sum==temp1)
{
printf("GIVEN NUMBER IS ARMSTRONG");
}
else
{
printf("NUMBER IS NOT ARMSTRONG");
}
}
