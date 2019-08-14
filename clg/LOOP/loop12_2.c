// check the prime no.  

#include<stdio.h>
int main()
{
int c=0,num,j,i;

printf("enter a Number ");
scanf("%d",&num);

i=2;
while(i<=num/2)
{
  if(num%i==0)
	break;
  else 
	i++;
}

if(i==num/2)
	printf("YES"); 
else 
	printf("NO");

printf("\n");

return 0;



}
