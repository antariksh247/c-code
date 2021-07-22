// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
//#include<libm.a>
int main() {
    // Write C code here
    int n,frst,last,count,sn;
 printf("enter a num\n");
 scanf("%d",&n);
 last=frst=n;
 last=last%10;
 count=(int)log10(n);
 frst=frst/(int) pow (10,count);
 printf("frst,   last,   count%d\t%d\t%d\t",frst,last,count);
 
 sn=last * (int) pow (10,count);
 sn=sn + n % (int) pow (10,count);
 sn=sn-last;
 sn=sn+frst;
 printf("swapped no->%d",sn);
    return 0;
}
