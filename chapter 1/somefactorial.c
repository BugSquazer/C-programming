#include <stdio.h>
 int fact(int);
 int main()
 {
    int a,sum=0;
    printf("enter the value");
    scanf("%d",&a);

    for(int i=1;i<=a;i++){
    sum=sum+fact(i);
 }
        printf("sum of factorial=%d",sum);
        return 0;
     }
     int fact(int a)
     {
        int fact=1;
        for(int i=1;i<=a;i++)
     {
        fact=fact*i;
     }
       return 0;
     }
 