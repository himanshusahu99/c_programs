//pattern
#include<stdio.h>
int main ()
{
 int i,j,k,n,s;

s=3;
printf("enter no. of row " );
scanf("%d",&n);

for (i=1; i<=n; i++)
{
	for(j=n; j>i; j--)
	{
	  printf(" ");
	}

	for (j=1; j<=(2*i-1); j++)
	{
	  printf("%d",j);
	}

/*	for(j=1; j<i; j++)
	{ 
	  printf("%d",s++);
	} */
printf("\n");

}
return 0;



}
