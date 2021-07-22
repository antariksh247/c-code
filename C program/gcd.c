//GCD of any number

#include<stdio.h>
void main()
{
int n1,n2,i,x;
printf("take first number\n ");
scanf("%d",&n1);
printf("take second number\n");
scanf("%d",&n2);
for(i=1;i<=n1||i<=n2;i++)
{
if(n1%i==0&&n2%i==0)
{
x=i;
}
}
printf("gcd is:->");
printf("%d",x);
}
