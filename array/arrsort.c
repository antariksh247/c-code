#include<stdio.h>
void main()
{
int a[6],i,temp,j;

printf("PLEASE ENTER THE NUMBERS\n");
for(i=0;i<6;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<3;i++)
{
for(j=i+1;j<3;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=3;i<6;i++)
{
for(j=i+1;j<6;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("display the array half in ascending and half in desceding");

for(i=0;i<6;i++)
{
printf("%d\n",a[i]);
}
}
