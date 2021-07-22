#include<stdio.h>
int main()
{
char str[6]="hello";
int i;
char *ptr;
ptr=str;
for(i=0;i<6;i++) 
printf("value of str[%d]=%d\n",i,ptr+i);
}
