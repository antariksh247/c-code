//find out the LCM of two numbers

#include<stdio.h>
#include<stdlib.h>
void main()
{
int n1,n2,i,j,s=1,p=1;

printf("TAKE FIRST NUMBER:->");
scanf("%d",&n1);

printf("\nTAKE SECOND NUMBER:->");
scanf("%d",&n2);

for(i=1;i<=10;i++)
{
s=n1*i;
for(j=1;j<=10;j++)
{
p=n2*j;
if(s==p)
{
printf("%d\n",s);
exit(0);
}
}
}
}
