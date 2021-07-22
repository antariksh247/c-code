#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p;
char *q;
float *r;
printf("\nsize of integer pointer:");
printf("%d",sizeof*(p));
printf("\nsize of character pointer:");
printf("%d",sizeof*(q));
printf("\nsize of float pointer:");
printf("%d",sizeof*(r));
}
