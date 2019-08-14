
#define MAX 100
#include<stdio.h>
int main()

{
 int a[MAX], n,i,j,t;

printf("enter size of array:\n");
 scanf("%d",&n); 

printf("enter array\n");
for(i=0; i<n; i++)
	{
	  scanf("%d",&a[i]);
	
	}

for(i=0; i<n; i++)
	{  
		t=a[i];
		j=i-1;
              while(j>=0 && a[j] > t)
		{
			a[j+1] = a[j];
			j=j-1;
		}
	a[j+1] = t;
	}

printf("array (after sorting)- \n");

for(i=0; i<n; i++)
	{
	  printf("%d\n",a[i]);
	
	}


return 0;
}
