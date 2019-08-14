#include<stdio.h>
int main()
{
 int i, a[5],item,pos=0,count=0,mid,high=4,low=0;
 
printf("enter the array (enter array in sorting order)");
  for(i=0; i<5; i++)
	{
 	 	scanf("%d",&a[i]);
	}

printf("enter the no. to search ");
scanf("%d",&item);

mid=(low+high)/2;

   while(low <= high)
	{
		if (a[mid] == item)
			{
				pos=1;
				break;
			}
		if (item > a[mid])
			low = mid+1;
		else 
			high=mid-1;
		
		mid=(low+high)/2;
 	 
       		
	}
		

if (pos == 1)
	printf("no. of item in the array= %d",mid+1);
else 
	printf("no. not foun");

return 0;


}
