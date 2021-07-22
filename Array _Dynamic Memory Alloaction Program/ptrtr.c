#include<stdio.h>
#include<stdlib.h>
void main()
{
int **p,i,j;
p=(int**)malloc(sizeof(int*));

for(i=0;i<3;i++)
{
*(p+i)=(int*)malloc(sizeof(int));


}
printf("ENTER THE ARRAY->");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",(*(p+i)+j));
}
}
printf("\nDISPLAY THE ARRAY->\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",*(*(p+i)+j));
printf("\t");
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i==j)
{
printf("%d\t",*(*(p+i)+j));
}
}
printf("\n");
}
}
