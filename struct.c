#include<stdio.h>
 struct s
 {
 int a;
 char c;
 int b;
 }__attribute__((packed));
 int main()
 {
 printf("%d",sizeof(struct s));
 }
