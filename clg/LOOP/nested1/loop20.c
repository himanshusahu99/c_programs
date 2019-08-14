//pattern
#include<stdio.h>
int main ()
{
 int i,j,k,n,s;

for (i=1; i<=5; i++)
{ 	for(j=1; j<=5; j++)
	{
	  if(i==1 )
		printf("*");
	  if(j==1)
		printf("*");
	  else printf(" ");
	
	  if(j==5)
		printf("*");
	
	 if(i==5)
		printf("*"); 
	 }

 	
printf("\n");

}
return 0;



}
