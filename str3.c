#include<stdio.h>

void main()
{
    int i=0,a,c=0,temp,k=0,j;
    char str[100],s[100];
    printf("take the string:-");
    fgets(str,20,stdin);
    puts(str);
    
    while(str[i]!='\0')
    {
        if(str[i+1]==' ' && str[i]>='A'||str[i]<='Z'||str[i]>='a'||str[i]<='z' )
        {
           c++;
        }
        i++;
    }
    printf("No. of words=%d",c);
}
