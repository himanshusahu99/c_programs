#include<stdio.h>

int main()
{
  float c,b,a,t;
  
  printf("enter the three side of triangle ");
  scanf("%f%f%f",&a,&b,&c);
  

  if (a>b && a>c)
 printf("%f is hypotenus",a); 


else if ( b>a && b>c )
{ 
  
  printf("%f is hypotenuse ",b);

  t=b;
  b=a;
  a=t;
 }  

else { printf("%f is hypotenuse ",c);

	t=c;
	  c=a;
  	a=t;

}
  
if (a*a=b*b+c*c)

 printf("YES");

else 
printf("NO");


return 0;
}
