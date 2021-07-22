#include<stdio.h>
int main()
{
int i,j;
for( i=4,j=0;i<0,j<5;i--,j++)             // 4 3 2 1 0
                                          // 0 1 2 3 4 
{
    if(i==j)
    printf("Antariksh\n");
    else
    printf("labade\n");
}
    
}
