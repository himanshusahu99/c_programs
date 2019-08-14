#include<stdio.h>
int main()

{

 float d;

printf("Enter no. of Days  ");
scanf("%f",&d);

if (d>=1 && d<=5)
printf("fine %.2f",d*0.5);

else if (d>=6 && d<=10)
printf("fine %.2f",d*1);

else if (d>=10 && d<=30)
printf("fine %.2f",d*5);

else 
printf("Your membership is cancled");


return 0;



} 
