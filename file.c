#include<stdio.h>
int main()
{
FILE *fp=fopen("/home/infinity/Desktop/abc.txt","r");
if (fp!=NULL)
{
char letter=fgetc(fp);
while(letter!=EOF)
{
printf("%c",letter);
letter=fgetc(fp);
}
}
fclose(fp);
return 0; 
}
