#include<stdio.h>
int main()
{
 int i, a[5],even=0,odd=0;

  for(i=0; i<5; i++)
	{
 	 	scanf("%d",&a[i]);
	}

   for(i=0; i<5; i++)
	{
 	 	if(a[i]%2==0)
			even++;
		else 
			odd++;
	}

printf("total even no = %d\ntotal odd no = %d\n",even,odd);

return 0;


}
