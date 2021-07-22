#include<stdio.h>
int a=20;
int sum(int a,int b)
{
printf("value of a=%d\n,and value of b=%d\n",a,b);
return a+b;
}
int main()
{
int a=10,b=20,c=0;
printf("a=%d\n,b=%d\n",a,b);
c=sum(a,b);
printf("value of c=%d\n",c);
return 0;

}
