//take the power of any numnber

#include<stdio.h>
void main()
{
int i,n,temp=1;
printf("take number:");
scanf("%d",&i);
printf("take power:");
scanf("%d",&n);
while(n>0)
{
temp=temp*i;
n--;
}
printf("RESULT=");
printf("%d",temp);
}
