 #include<stdio.h>
 int main()
 {
 int i=0,flag=0;
 int arr[]={10,20,30,40,50};
 int key=100;
   for(i=0;i<5;i++)
    {
        if(arr[i]==key)
             flag=1;
     
        
      }
       if (flag==1)
       printf("found");
       else
       printf("not found");
      return 0;
      }
