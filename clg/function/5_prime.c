#include<stdio.h>

int is_prime(int);
int main()
{
  int i,j,k,n,p;
   printf("enter any no. ");
   scanf("%d",&n);
  p= is_prime(n);
   
  if (p==1)
	printf("prime no.");
  else 
	printf("not a prime no.");

}

int is_prime(int n)
{
 int i,k=0;
  
 for(i=1; i<=n/2; i++)
	{
 	   if(n% i == 0)
	    k++;
		
	}

   if(k==1)
	return 1;
   else 
	return 0;

}
