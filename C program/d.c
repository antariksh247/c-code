#include<stdio.h>
void main()
{
int n,i;
printf("enter the number\n:");
scanf("%d",&n);
i=n;
while(n<10)
{
n=n/10;
}
printf("%d",n);
i=i%10;
printf("%d",i);

}
