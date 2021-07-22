//prime factors of any number

#include<stdio.h>
void main()
{
  int n,i,k=1,j,c,a;
 printf("Enter any no.:");
 scanf("%d",&n);
for(k=1;k<=n;k++)
{ c=0;
if(n%k==0)
{
a=k;
for(i=1;i<=k;i++)
{
if(a%i==0)
{
c++;
}
}
if(c==2)
{
printf("%d ",a);
}
}
}
}
