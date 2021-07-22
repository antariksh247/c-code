// print the prime number upto n

#include<stdio.h>
void main()
{
int i,j,temp=0,n;
printf("ENTER THE NUMBER:->");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
temp=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
{
temp++;
}
}
if(temp==2)
{
printf("%d\n",i);
}
}
}


