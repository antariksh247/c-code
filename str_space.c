#include<stdio.h>
#include<string.h>

void main()
{
char str[100];
int a,i,count=0,flag=0,c=0;
printf("Take the string :-");
fgets(str,80,stdin);
puts(str);
for(i=0;i<strlen(str);i++)
{
if(str[i]==' ')
count++;
}
printf("\nNumber of spaces=");
printf("%d",count);

printf("\nNumber of Words=");
for(i=0;i<strlen(str);i++)
{
if(str[i+1]==' '&& str[i]!=' ')
{
c++;
}
}
c++;
printf("%d",c);
}
