//factors of number

#include<stdio.h>
void main()
{
int i,n,temp=1;
printf("take number:");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
{
printf("\n%d",i);
}
}
}