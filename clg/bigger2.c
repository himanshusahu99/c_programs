#include<stdio.h>
int main()

{
int a,b,c,d,big;
printf("Enter 3 no. ");
scanf("%d%d%d",&a,&b,&c);

if (a>b && a>c)
    big=a;
else if (b>a && b>c)
   big=b;
else big=c;
	

printf("greatest no. = %d",big);
return 0; 
}

