//factorial of given number 

#include<stdio.h>
void main()
{
int n,i,pro=1;

printf("take any number");
scanf("%d",&n);
for(i=n;i>0;i--)
{
pro=pro*i;
}
}
printf("%d",pro);
