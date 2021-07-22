#include<stdio.h>
int main()
{
char *subject[5]={"MARATHI","HINDI","ENGLISH","TAMIL","TELGU"};
for (int i=0;i<5;i++)
{
printf("add of subject[%d]=%s\n",i,subject[i]);
}
return 0;
}
