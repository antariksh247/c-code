#include<stdio.h>
void add(int*a,int*b,int*c)
{
*c=*a+*b;
printf("%d",*c);
}
int main()
{
int a=10,b=20,c;
add(&a,&b,&c);

}
