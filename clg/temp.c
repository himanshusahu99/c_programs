#include<stdio.h>

int main()
{ 
 float fr, cel;

printf("enter the temperatue in fahrenheit ");
scanf("%f",&fr);
cel=5.0/9.0 * (fr-32);
printf("temp in Centigrade= %10.00f\n",cel);

return 0;

}

