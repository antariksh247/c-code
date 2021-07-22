#include<stdio.h>
void swap(int *x,int*y)
{
int temp=*x;
*x=*y;
*y=temp;

}
int main()
{
int a=10,b=15,c;
printf("entr the 2 no\n");
scanf("%d%d",&a,&b);
printf("value of a=%d,and value of b=%d",a,b);
swap(&a,&b);
printf("\n value after swapping a=%d,b=%d",a,b);
}
