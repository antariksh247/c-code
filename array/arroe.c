//arranged even and odd numbers in same array

#include<stdio.h>
void main()
{
int a[6],i,j,x[6],y[6],k;

printf("Enter the numbers\n");
for(i=0;i<6;i++)
{
scanf("%d",&a[i]);
}

k=0;
for(i=0;i<6;i++)
{
if(a[i]%2==0)
{
x[k]=a[i];
k++;
}
}

for(i=0;i<6;i++)
{
if(a[i]%2!=0)
{
x[k]=a[i];
k++;
}
}

for(i=0;i<6;i++)
{
a[i]=x[i];
}
printf("Even and odd separated array is:\n")
for(i=0;i<6;i++)
{
printf("%d\n",a[i]);
}
}
