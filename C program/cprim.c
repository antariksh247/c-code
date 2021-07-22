

#include<stdio.h>
void main()
{
int i,j,temp=0,n;
printf("ENTER THE NUMBER:->");
scanf("%d",&n);
for(j=1;j<=n;j++)
{
if(n%j==0)
{
printf("it is prime number\n");
}
else
{
printf ("given number is not prime number\n");
}
}
}


