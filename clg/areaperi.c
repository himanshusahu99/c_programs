#include<stdio.h>

int main()
{ 
 float b, l, r,  ar,pr,cc,ac;

printf("enter the height breatdh  of the rect ");
scanf("%f%f",&b,&l);
ac = b*l;
pr = 2*(b+l);
printf("arae of the rect = %10.00f\n perimeter of the rect = %10.00f\n",ac,pr);

printf("\nenter the radious of the circle  ");
scanf("%f",&r);
ac = 3.14*r*r;
cc = 2*3.14*r;
printf("area of the circle = %10.00f\n circum of the rect = %10.00f\n",ac,cc);

 


return 0;

}

