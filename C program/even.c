//print even numbers

//print odd numbers

#include<stdio.h>
void even()
{
int i=0;
while(i<=100)
{
printf("%d\t",i);
i=i+2;
}
}

void odd()
{
int i=1;
while(i<=100)
{
printf("\t %d",i);
i=i+2;
}
}

void main()
{
even();
odd();
}
