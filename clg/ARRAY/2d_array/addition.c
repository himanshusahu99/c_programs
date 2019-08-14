#include<stdio.h>
int main()
{
 int a[10][10],b[10][10],c[10][10]i,j,row1,col1,,row2,col2,flag=1;
 printf("enter no. of the row (matrix) ");
scanf("%d",&row1);
printf("enter the no. of column (first matrix)");
scanf("%d",&col1);
printf("enter the array element\n ");
for(i=0; i<row; i++)
{
	for(j=0; j<col; j++)
	{
		scanf("%d",&a[i][j]);	
	}
}

printf("enter 2nd matrics\n");
for(i=0; i<row1; i++)
{
	for(j=0; j<col1; j++)
	{
		scanf("%d",&b[i][j]);	
	}
}


for(i=0; i<row1; i++)
{
	for(j=0; j<col1; j++)
	{
		c[i][j]=b[i][j]+a[i][j];
 		printf("%d",c[i][j]);	
	}
printf("\n");
}


return 0;}
