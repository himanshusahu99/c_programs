#include<stdio.h>

int main()
{

double bs,da,ra,gs;

printf("salary ");
scanf("%lf",&bs);

if (bs<15000)
 { 
   da=bs*20/100;
ra=bs*10/100;

}

else
{
da=bs*40/100;
ra=bs*20/100;

}

gs=da+ra+bs;
printf("Gross salary = %lf\n ",gs);

return 0;


}
