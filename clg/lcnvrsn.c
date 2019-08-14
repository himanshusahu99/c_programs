#include<stdio.h>

int main()
{ 
 float km, m,cm,inch,feet;

printf("enter the distance in KM ");
scanf("%f",&km);
m=km*1000;
cm=m*100;\
inch=cm/2.54;
feet=inch/12;

printf("distance in km=%10.00fkm\n meter=%10.00fm\n cm=%10.000fcm\n inch=%10.00fin\n feet=%10.00fft\n", km,m,cm,inch,feet);
return 0;

}

