#include<stdio.h>
int main()
{
 int a[10][10],b[10][10],i,j,row,col;
 printf("enter no. of the row ");
scanf("%d",&row);
printf("enter the no. of column ");
scanf("%d",&col);
printf("enter the array element ");
for(i=0; i<row; i++)
{
	for(j=0; j<col; j++)
	{
		scanf("%d",&a[i][j]);	
	}
}

for(i=0; i<row; i++)
{
	for(j=0; j<col; j++)
	{
		b[i][j]=a[j][i];	
	}
}

printf("transposed matrics:\n");
for(i=0; i<row; i++)
{
	for(j=0; j<col; j++)
	{
		printf("%d\t",b[i][j]);	
	}
printf("\n");
}



return 0;}
