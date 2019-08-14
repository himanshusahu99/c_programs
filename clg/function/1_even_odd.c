#include<stdio.h>

int even_odd(int);

int main()
{
 int a,b;
 printf("enter any no. ");
scanf("%d",&a);
b=even_odd(a);

	if(b==1)
		printf("even");
	else
		printf("odd");

return 0;
}

int even_odd(int x)
{
   if(x%2==0)
  	return 1;
   else 
	return 0;
}
