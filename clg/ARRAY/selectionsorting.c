#include<stdio.h>
int main()
{
 int a[5], i,j,temp;
 
printf("enter array ");
for(i=0; i<5; i++)
	{
	  scanf("%d",&a[i]);
	
	}

for(i=0; i<4; i++)
	{
		for(j=i+1; j<5; j++)
		{  
                  	if(a[j]<a[i])
		  	{ 	temp= a[i];
		  		a[i]=a[j];
		 		a[j]=temp;	
		  	}		
		}
	}

printf("array (after sorting)-  ");

for(i=0; i<5; i++)
	{
	  printf("%d",a[i]);
	
	}


return 0;
}
