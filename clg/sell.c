#include<stdio.h>
int main()
{

float sp,pr,tcp,cp;

printf("enter the selling price of 15 item - " );
scanf("%f",&sp);
printf("enter the profit - ");
scanf("%f",&pr);

tcp=sp-pr;
cp=tcp/15;

printf("Cost price of each item = %05.000f\n",cp);
return 0; 
}

