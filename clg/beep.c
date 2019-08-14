#include<stdio.h>
int main()
{

float sale,hra,da,cnvs,basic,intsv, bns,tsalary;

printf("enter the total sales = ");
scanf("%f",&sale);
basic=3000;
hra=20*3000/100;
da=110*3000/100;
cnvs=500;

if (sale>100000)
{ intsv=10*sale/100;
bns=500;
}

else
{
 intsv=5*sale/100;
 bns=200;
}

tsalary=basic+hra+da+cnvs+intsv+bns;
printf("total salary of medical representative is %f \n",tsalary);     


return 0; 



}
