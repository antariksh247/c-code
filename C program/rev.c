//REVERSE OF GIVEN NUMBER
#include<stdio.h>
void main()
{
int n,temp,rev=0;

printf("TAKE THE NUMBER");
scanf("%d",&n);

while(n>0)
{
temp=n%10;
rev=rev*10+temp;
n=n/10;
}
printf("reversed number is:->");
printf("%d\n",rev);
}
