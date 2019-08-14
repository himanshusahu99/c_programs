#include<stdio.h>
int main()

{
int a,b,c,d,big;
printf("Enter 3 no. ");
scanf("%d%d%d",&a,&b,&c);

if (a>b && a>c)
    big=a;
if (b>a && b>c)
   big=b;
if (c>a && c>b)
   big=c;
	

printf("greatest no. = %d",big);
printf("\n");
return 0; 
}

