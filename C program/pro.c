//product of digit of number 

#include<stdio.h>
void main()
{
int n,i,product=1;
printf("TAKE ANY NUMBER\n");
scanf("%d",&n);
while(n>0)
{
i=n%10;
n=n/10;
product=product*i;
}
printf("\nproduct of digit::");
printf("%d",product);
}
