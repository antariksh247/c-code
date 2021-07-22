#include<stdio.h>
#include<string.h>
int main()
{
int len,i,wstart=0;
char str[]="antariksh labade";
printf("%s\n",str);
len=strlen(str);
printf("%d\n",len);


void rev(char str[],int start,int end)
{
    while(start<end)
  {  int temp=str[start];
    str[start++]=str[end];
    str[end--]=temp;
}
}
for(i=0;i<len;i++)
{
    if(str[i]==' ')
    {
    rev(str,wstart,i-1);
    wstart=i+1;
    }
}
rev(str,wstart,len-1);
printf("%s\n",str);
}
