//pattern
#include<stdio.h>
int main ()
{
 int i,j,k,n,s;

printf("enter no. of row " );
scanf("%d",&n);


for (i=1; i<=n; i++)
{ s=1;
	for(j=n; j>i; j--)
	{
	  printf(" ");
	}

	for (j=1; j<=i; j++)
	{
	  printf("%d",s++);
	}
    s=s-1;
	for(j=1; j<=i-1; j++)
	{ 
	  printf("%d",--s);
	} 
printf("\n");

}
return 0;



}
