#include<stdio.h>
int main()
{

float unt,chrg,a,b,c;

printf("entet unit = ");
scanf("%f",&unt);

if (unt<=200)
{
  chrg=100 + unt*0.8;
 }

else if (unt>200 && unt<=300)
 {
   
   chrg=100 + unt*0.9;
 }

else  (unt>300)
{  chrg=unt+unt*15/100; }

printf("charges = %f ",chrg);

printf("\n");
return 0;

} 
