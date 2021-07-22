//unique element of an array

#include<stdio.h>
void main()
{
int a[10],i,c=0,j   ;

printf("Enter the number");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<10;i++)
{
c=0;
for(j=0;j<10;j++)
{
if(a[i]==a[j])
{
c++;
}
}
if(c==1)
{
printf("unique element:->");
printf("%d\n",a[i]);
}
}
}
