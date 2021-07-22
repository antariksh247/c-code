#include<stdio.h>
void main()
{
int a[5],i,n,flag=0;
printf("\n enter the number:");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("\ndisplay\n:");
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}

printf("\nENTER THE U WANT TO SEARCH:");
scanf("%d",&n);
for(i=0;i<5;i++)
{
if(a[i]==n)
{
printf("\nFOUND");
flag=1;
break;
}
}
if(flag==0)
{
printf("NOT FOUND");
}
}
