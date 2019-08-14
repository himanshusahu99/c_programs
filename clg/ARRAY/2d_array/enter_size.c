#include<stdio.h>
int main()
{
 int i,j,a[20][20],row,col;

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
		printf("%d\t",a[i][j]);
	}
printf("\n");
}
return 0;
}
