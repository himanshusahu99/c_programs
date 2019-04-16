
#define MAX 100
#include<stdio.h>
int main()

{
 int a[MAX], n,i,j,temp;

printf("enter size of array:\n");
 scanf("%d",&n); 

printf("enter array\n");
for(i=0; i<n; i++)
	{
	  scanf("%d",&a[i]);
	
	}

for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{  
                  	if(a[j]< a[i])
		  	{ 	temp= a[i];
		  		a[i]=a[j];
		 		a[j]=temp;	
		  	}		
		}
	}

printf("array (after sorting)- \n");

for(i=0; i<n; i++)
	{
	  printf("%d\n",a[i]);
	
	}


return 0;
}
