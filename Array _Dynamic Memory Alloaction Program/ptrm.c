#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p=NULL,i;
p=(int*)malloc(3*sizeof(int));
printf("\nENTER THE ARRAY:\n");
for(i=0;i<3;i++)
{

scanf("%d",p+i);

}
printf("\nDISPLAY:");
for(i=0;i<3;i++)
{

printf("%d\n",*(p+i));

}
}





