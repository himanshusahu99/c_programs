#include<stdio.h>

#define greater(a,b) (a>b)?a:b
int main ()
{
int a,b;
printf("enter two no. ");
scanf("%d%d",&a,&b);

printf("greater = %d",greater(a,b));
return 0;

}
