#include<stdio.h>

void main()
{
    int i,a,c=0,temp,k=0,j;
    char str[100],s[100];
    printf("take the string:-");
    fgets(str,20,stdin);
    puts(str);
    
    
    while(str[i]!='\0')
    {
         if(str[i]!=" ")
         {
            c++;
            i++;
         }
         else
         {
            j=c;
            
            while(j!=k)
            {
                s[k]=;
                str[j]=str[k];
                str[k]=temp;
                j--;
                
            }
            c=0;
         }
    }
    puts(str);
}

