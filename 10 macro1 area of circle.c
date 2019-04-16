#include<stdio.h>

#define area(r) 3.14*r*r
int main ()
{
float r;
printf("enter radius of circle ");
scanf("%f",&r);

printf("%.3f",area(r));
return 0;

}
