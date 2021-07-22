//fibo series
#include<stdio.h>
void main()
{
	int n,no1=0,no2=1;
	printf("\nEnter limit :- ");
	scanf("%d",&n);
	printf("\n %d",no1);
	printf("\n %d",no2);
	
	while(no2<n)
	{
		no2=no2+no1;
		no1=no2-no1;
		printf("\n %d",no2);
	}
}	
