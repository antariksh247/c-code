//frequecy of element in array

#include<stdio.h>
void main()
{
int a[10];
int i,j,c=0;

printf("Take the numbers");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("frequency:->\n");
for(i=0;i<5;i++)
{
c=0;
for(j=0;j<5;j++)
{
if(a[i]==a[j])
{
c++;
}
}
printf("%d=",a[i]);
printf("%d\n",c);
}
}
