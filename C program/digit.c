//print first digit of number

//print last digit of number

#include<stdio.h>
void first()
{
int n;
printf("enter the number\n:");
scanf("%d",&n);
while(n>10)
{
n=n/10;

printf("first digit is:\n");
printf("%d",n);
}

}
void last()
{
int j;
printf("enter the number\n:");
scanf("%d",&j);
while(j>10)
{
j=j%10;

printf("last digit is:\n");
printf("%d",j);
}
}
void main()
{
first();
last();
}


