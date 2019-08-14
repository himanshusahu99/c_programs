//pattern
#include<stdio.h>
int main ()
{
 int i,j,k,n,s;

printf("enter no. of row " );
scanf("%d",&n);


for (i=5; i>=1; i--)
{ s=5;
	for(j=i; j>1; j--)
	{
	  printf(" ");
	}

 	for (j=5; j>=i; j--)
	{
	  printf("%d",s--);
	}
     
   s=s+1;
	for(j=5; j> i; j--)
	{ 
	  printf("%d",++s);
	} 
printf("\n");

}
return 0;



}
