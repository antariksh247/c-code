#include<stdio.h>
void main()
{
int n,i,sum=0,avg=0;
printf("Take the number=");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
 sum=sum+i*i*i;
}
avg=sum/n;
printf("Sum=%d",sum);
printf("Average=%d",avg);
}
