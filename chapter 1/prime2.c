#include<stdio.h>
   int main(){
    int a, b =1;
    printf("enter the number");
    scanf("%d" ,&a);
    for(int i=2; i<=a/2; i++)
    {
        if(a% i==0)
    {
        b=0;
        break;
   }
    }
     if(b)
    {
        printf("it is prime number");
    } 
       else printf("it is not prime number");
       return 0;
   }