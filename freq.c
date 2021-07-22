// Frequency find
#include<stdio.h>
int main()
{
     int n;
int d,c;
printf("ENter the no\n");
scanf("%d",&n);
printf("ENter the digit\n");
scanf("%d",&d);
c=0;
while(n>0){

    if(n%10==d)
    c++;
n=n/10;
}
printf(" freq of %d  is %d ", d,c);
return 0;


}
