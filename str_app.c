#include<stdio.h>
void main()
{
    char str[100],s[101];
    int c=0,i=0,j;
    printf("Take the 1st String:-");
    fgets(str,20,stdin);
    puts(str);
    printf("Take the 2nd String:-");
    fgets(s,20,stdin);
    puts(s);
    i=0;
    while(s[i]!='\0')
    {
        c++;
    }
    j=c;
    while(str[i]!='\0')
    {
        s[j]=str[i];
        i++;
        j++;
    }
    printf("Appended String:-");
    puts(s);
}    
    
