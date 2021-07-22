#include<stdio.h>
void main()
{
    char str[100],s[101];
    int a,i;
    printf("Take the String:-");
    fgets(str,20,stdin);
    puts(str);
    i=0;
    printf("take the number");
    scanf("%d",&a);
    while(i!=a)
    {
        s[i]=str[i];
        i++;   
    }
    puts(s);
}
