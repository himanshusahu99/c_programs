#include<stdio.h>
int main()

{
 int i,j,k,n;

printf("enter no. of row ");
scanf("%d",&n);

for(i=1; i<=n; i++)
 { k=1; 
	for(j=1; j<i; j++)
		printf(" ");
	for(j=n; j>=i; j--)
	        {	printf("%d",j);
			k++;
 		}
	for(j=i+1; j<=n; j++)
		{ 	printf("%d",j);
			k++;
		}

 printf("\n");
 }


}
