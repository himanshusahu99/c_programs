#include<stdio.h>
int main()
{
 int i, a[5],item,pos=0;
 
printf("enter the array ");
  for(i=0; i<5; i++)
	{
 	 	scanf("%d",&a[i]);
	}

printf("enter the no. to search ");
scanf("%d",&item);

   for(i=0; i<5; i++)
	{
 	 	if(a[i]==item)
		{	pos=1;
			break;
		}
	}

if (pos == 1)
	printf("position of no. = %d",++i);
else 
	printf("no. not foun");

return 0;


}
