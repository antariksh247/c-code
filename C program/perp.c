//PRINT PERFECT NUMBER UPTO N

#include<stdio.h>
void main()
{
int n,i,j,sum=0;

printf("take numbers:->");
scanf("%d",&n);

printf("perfect number are\n");
for(i=1;i<n;i++)
{
sum=0;
for(j=1;j<i;j++)
{
if(i%j==0)
{
sum=sum+j;
}
}
if(sum==i)
{
printf("%d\n",sum);
}
}
}
