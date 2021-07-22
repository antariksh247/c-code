//reverse digi of the number 

#include<stdio.h>
void main()
{
int n,temp;
printf("TAKE ANY NUMBER\n");
scanf("%d",&n);
temp=n;
while(n>0)
{
n=n%10;
printf("%d",n);
temp=temp/10;
n=temp;
}
}
