#include<stdio.h>
void main()
{
    char str[100];
    int z=0,x=0,c=0,v=0,i;
    printf("Take the String:-");
    fgets(str,20,stdin);
    puts(str);
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            c++;
        }
        if(str[i]>=0 && str[i]<=9)
        {
            z++;
        }
        if(str[i]>='a' && str[i]<='z')
        {
            x++;
        }
        if(str[i]>='A' && str[i]<='Z')
        {
            v++;
        }
        i++;
    }
    printf("Number of Capital Letter:-%d",v);
    printf("\nNo of Small Letter:-%d",x);
    printf("\nNo of Numbers:-%d",z);
    printf("\nNo of White Spaces:-%d",c);
}
