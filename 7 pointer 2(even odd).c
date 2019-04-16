#include<stdio.h>

int main ()
{

int a;
int *p=&a;

// even odd pta krna hai
printf("enter no. ");
scanf("%u", p);
if(*p%2==0)
    printf("%u is even",*p);
else
    printf("%u is odd",*p);
return 0;




}
