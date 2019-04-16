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

printf("sum 0f upper right triangle = %d",sum);
return 0;
}
