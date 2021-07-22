//check number is per fect or not

#include<stdio.h>
void main()
{
int n,i,sum=0,temp;
printf("ENTER THE NUMBER:");
scanf("%d",&n);
for(i=1;i<n;i++)

{
if(n%i==0)
{
temp=i;
sum=sum+temp;
}

}
if(sum==n)
{
printf("NUMBER IS PERFECT");
}
else
{
printf("\nNUMBER IS NOT PERFECT");
}

}
