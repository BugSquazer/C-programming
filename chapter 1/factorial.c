#include <stdio.h>
   int main(){
    int a,b;
    printf("enter the value");
    scanf("%d" ,&a);

     for(int i=1; i<=a;i++)
     {
        b =b*i;
     }
     printf("factorial %d!=%d" ,a,b);
     return 0;
   }