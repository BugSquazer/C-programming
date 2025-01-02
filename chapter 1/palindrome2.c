#include <stdio.h>
  int main(){
    int a,b=0,c=0,d;
    printf("enter the value");
    scanf("%d" ,&a);

    while(a !=0)
    {
        b = a%10;
        c = c*10+b;
        a = a/10;
    }  
       if ( d==c)
       {
        printf("it is not c");
       }
        else
         printf("it is  c");

        return 0;
       }
    
  