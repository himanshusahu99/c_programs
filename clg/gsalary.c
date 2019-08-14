#include<stdio.h>
int main()
{
double bs,da,ra,gs;

printf("salary ");
scanf("%lf",&bs);

da=bs*40/100;
ra=bs*20/100;

gs=da+ra+bs;

printf("Gross salary = %lf\n ",gs);
return 0;
}
