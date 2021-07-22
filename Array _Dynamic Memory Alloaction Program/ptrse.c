#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p=NULL,i,len=0,key;
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
printf("\nENTER THE U WANT TO SEARCH->");
scanf("%d",&key);
for(i=0;i<len;i++)
{
if(key==*(p+i))
{
printf("SEARCH ELEMENT ARE%d",key);
}
}
}

