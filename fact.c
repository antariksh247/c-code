#include <stdio.h>
int main() {
    int i,n,fact=1;
    printf("Enter the no which you want to get factorial\n");
    scanf("%d",&n);
    fact=facto(n);
    printf("factorial of %d ! is %d:-",n,fact);
    int facto(int i)
    {
        if (i<=1)
            return 1;
        else
            return i* facto(i-1);
    }
   
    return 0;
}
