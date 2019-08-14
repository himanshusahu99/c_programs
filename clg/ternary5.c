#include<stdio.h>
int main ()
{

float sal,c;

printf("enter the salary ");
scanf("%f",&sal);

c= (sal<40000 && sal>25000) ? printf("MANAGER"): (  ( sal<25000 && sal >1500 )? printf("accountant"):printf("clerk") ); 
printf("\n");
return 0; 


}
