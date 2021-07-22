//print last and first digit of number

#include<stdio.h>
void main()
{
int n,temp;
printf("ENTER THE NUMBER:\n");
scanf("%d",&n);
temp=n;
printf("\nlast digit is:");
n=n%10;
printf("%d",n);
while(temp>10)
{
temp=temp/10;
}
printf("\nfirst digit number is:");
printf("%d",temp);

}
