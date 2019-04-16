#include<stdio.h>
int main()
{
 int a[10][10],b[10][10],i,j,row,col,flag=1;
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

printf("original matrics\n");
for(i=0; i<row; i++)
{
	for(j=0; j<col; j++)
	{
		printf("%d\t",a[i][j]);	
	}
printf("\n");
}

for(i=0; i<row; i++)
{
	for(j=0; j<col; j++)
	{
		b[i][j]=a[j][i];	
	}
}

printf("\ntransposed matrics:\n");
for(i=0; i<row; i++)
{
	for(j=0; j<col; j++)
	{
		printf("%d\t",b[i][j]);	
	}
printf("\n");
}

for(i=0; (i<row && flag==1); i++)
{
	for(j=0; j<col; j++)
	{
		if(a[i][j]==b[i][j])
		{
			flag=0;
			break;
		}	
	}

}


if(flag==1)
printf("Symmetric = YES\n");
else 
printf("Symmetric = NO\n");


return 0;}
