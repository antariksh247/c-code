//count of digit in number

#include<stdio.h>
void main()
{
int i,count=0;
printf("ENTER THE NUMBER\n");
scanf("%d",&i);
while(i!=0)
{
i=i/10;
count++;
}
printf("%d",count);

}
