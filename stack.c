#include<stdio.h>
int top=-1;
char stack[20];
void push(char x)
{
    if(top==20)
        return;
    else
    {
        stack[++top]=x;
    }
    
}

char pop()
{
    if(top==-1)
        return -1;
    else
    {
        return stack[top--];
    }
}
    int priority(char x)
 {
    if(x=='(')
        return 0;
    if(x=='+'||x=='-')
         return 1;
    if(x=='*'||x=='/')
           return 2;
 }
int main()
{
 char exp[20];
 char *e,x;
 printf("ENETR THE EXPREESION\n");
 scanf("%s",exp);
 e=exp;
 while(*e!='\0')
 {
    if(*e >='0' && *e <='9'||*e>='a' && *e<='z')
        printf("%c",*e);
    
    else if(*e=='(')
        push(*e);
    
    else if(*e==')')
        {
            while((x=pop())!='(')
                printf("%c",x);
        }
    else
    {
        while(priority(stack[top])>=priority(*e))
           {
            printf("%c",pop());
        }
        push(*e);
   }
 e++;
 }  
 while(top!=-1)
  printf("%c",pop()); 
return 0;
}
