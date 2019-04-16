#include<stdio.h>
int main()
{
 int i,j,a[20][20],row,col,sum=0;

printf("enter the row");
scanf("%d",&row);
printf("enter the col ");
scanf("%d",&col);
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
		if( (i<j) )
		sum=sum+a[i][j];
	}
printf("\n");
}
printf("sum 0f upper right triangle = %d\n",sum);

sum=0;
for(i=0; i<row; i++)
{
	for(j=0; j<col; j++)
	{
		if( (j<i) )
		sum=sum+a[i][j];
	}
printf("\n");
}
printf("sum 0f lower left triangle = %d\n",sum);

sum=0;
for(i=0; i<row; i++)
{
	for(j=0; j<col; j++)
	{
		if( (i+j)>=row )
		sum=sum+a[i][j];
	}
printf("\n");
}
printf("sum 0f Right lower triangle = %d\n",sum);

sum=0;
for(i=0; i<row; i++)
{
	for(j=0; j<col; j++)
	{
		if( (i+j)<(row-1) )
		sum=sum+a[i][j];
	}
printf("\n");
}
printf("sum 0f left upper triangle = %d\n",sum);

return 0;
}
