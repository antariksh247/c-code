#include<stdio.h>
int main()
{
int a=10;
int *ptr=&a;
printf("value %d\n",*&a);
printf("value %d\n",&a);
printf("value %d\n",*&ptr);
printf("value %d\n",*ptr);

}
