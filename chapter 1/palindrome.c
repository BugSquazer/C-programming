#include <stdio.h>
   int main(){
   int n, rem, rvrs =0, temp;
   printf("enter the number :");
   scanf("%d" , &n);
   temp =n;
   while (n !=0){
    rem = n % 10;
    rvrs = rvrs * 10+rem;
    n /= 10; 
   } 
   if (temp == rvrs)
   {
    printf ("%d is a palindrome number", temp);  
   }
     else
     printf("it is not a palindrome");

     return 0;
   }
