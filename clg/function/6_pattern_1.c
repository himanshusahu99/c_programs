#include<stdio.h>

void pattern_1(int);
int main()
{
   int n;
   printf("entre no. of rows");
   scanf("%d",&n);
   pattern_1(n);

   return 0;
	
}

void pattern_1(int n)
{
   int i,j;
  
   for (i=1; i<=n; i++)
 	{
		for(j=1; j<=i; j++)
			printf("*");
		
		printf("\n");
	}


}

 
	
