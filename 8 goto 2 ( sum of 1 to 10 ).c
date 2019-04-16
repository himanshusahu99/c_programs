#include<stdio.h>

int main ()
{
   int i=0,n,sum=0;

   A:
       i++;
       sum=sum+i;


       if(i==10)
       {
        printf("sum = %d",sum);
        goto B;
       }
       goto A;
    B:
        return 0;



}
