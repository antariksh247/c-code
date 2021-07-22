#include<stdio.h>
int main()
{
int *arr[5];
int a=10,b=20,c=30,d=40,e=50;
int i;
arr[0]=&a;
arr[1]=&b;
arr[2]=&c;
arr[3]=&d;
arr[4]=&e;
for (i=0;i<5;i++)
{
printf("ADDRES OF [%d]=%d\tVALUE OF *[%d]=%d=\n=",i,arr[i],i,*arr[i]);

}
return 0;
}
