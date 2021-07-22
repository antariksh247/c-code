#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p=NULL,i,len=0,temp,min =0;
printf("\nENTER THE LENGTH OF ARRAY->");
scanf("%d",&len);
p=(int*)malloc(len*sizeof(int));
printf("\nENTER THE ARRAY ELEMENT->\n");
for(i=0;i<len;i++)
{
scanf("%d",(p+i));
}
printf("\nDISPLAY->");
for(i=0;i<len;i++)
{
printf("%d\t",*(p+i));
}
min=*(p+i);
for(i=0;i<len;i++)
{

if(min<*(p+i))

{
temp=min;
min=*(p+i);
*(p+i)=temp;
}
}
for(int i=0;i<len;i++)
{
printf("%d\t",temp);
}
}

