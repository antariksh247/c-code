#include<stdio.h>
#include<stdlib.h>
void main()
{
int flag=0;
int **p,i,j;
p=(int**)malloc(sizeof(int*));

for(i=0;i<3;i++)
{
*(p+i)=(int*)malloc(sizeof(int));
}
printf("\nENTER THE ARRAY->\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",*(p+i)+j);
}
}
printf("\nDISPLAY THE ARRAY->\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",*(*(p+i)+j));
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(j<i)
{
if(*(*(p+i)+j)!=0)
{
flag=1;
break;
}
}
}
}
if(flag==0)
{
printf("\nARRAY ARE UPPER MATIX");
}
else
{
printf("\nARRAY ARE NOT UPPER MATRIX");
}
}
