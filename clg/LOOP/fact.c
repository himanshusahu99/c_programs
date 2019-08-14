// sum of all even  no. from 1 to n using while loop

#include<stdio.h>
int main ()
{
int i=1,n,fact=1;
printf("entet no. " );
scanf("%d",&n);

printf("Factorial  = \n");
while(i<=n)
 { 
   fact=fact*i; 
 i++;

 }

printf("%d \n",fact);
return 0;


}
