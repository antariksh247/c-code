#include<stdio.h>
void main()
{
int x[6],i,a;

printf("please enter the numbers\n");
for(i=0;i<6;i++)
{
scanf("%d",&x[i]);
}

printf("display:->\n");
for(i=0;i<6;i++)
{
printf("%d\n",x[i]);
}

a=x[0];
for(i=1;i<6;i++)
{
if(a>x[i])
{
a=x[i];
}
}
printf("minimum number is:->");
printf("%d",a);
}


