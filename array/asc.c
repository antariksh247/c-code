#include<stdio.h>
void main()
{
int a[5],temp,i,j;

printf("plese enter the numbers\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}

printf("DISPLAY:->\n");
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}

printf("dislay the numbers in ascending order");
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(a[i]>a[j])
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
}
}
}
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
}
