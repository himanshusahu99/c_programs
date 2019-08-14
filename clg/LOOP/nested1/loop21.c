// prime no. btw 1 and 100
#include<stdio.h>
int main()
{
 int i,j,k,l;

printf("prime no. \n");
for(i=1; i<=100; i++)
	{
           for(j=2; j<=i; j++)
		{
			if(i%j==0)
				break;		
		}
	   if (j==i)
		printf("%d\n",i);

	}

return 0;
  
 
}
