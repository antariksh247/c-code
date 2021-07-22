#include<stdio.h>
void main()
{
int a[5],i,temp,j;

printf("take the numbers\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}

printf("DESCENDING ORDER\n");
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
}sSS
