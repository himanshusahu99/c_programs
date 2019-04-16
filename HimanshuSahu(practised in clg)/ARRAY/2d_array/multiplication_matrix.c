#include<stdio.h>
int main()
{
 int a[10][10],b[10][10],c[10][10],i,j,row1,col1,row2,col2,k,sum=0;
 printf("enter no. of the row (1st matrix) ");
scanf("%d",&row1);
printf("enter the no. of column (1st matrix)");
scanf("%d",&col1);
printf("\n\nenter no. of the row (2nd matrix) ");
scanf("%d",&row2);
printf("enter the no. of column (2nd matrix)");
scanf("%d",&col2);

if(col1 == col2)
 {
printf("enter the 1st matrics ");
for(i=0; i<row1; i++)
{
	for(j=0; j<col1; j++)
	{
		scanf("%d",&a[i][j]);	
	}
}


printf("enter the 2nd matrics ");
for(i=0; i<row2; i++)
{
	for(j=0; j<col2; j++)
	{
		scanf("%d",&b[i][j]);	
	}
}



for(i=0; i<row1; i++)
{
	for(j=0; j<col2; j++)
	{  
		sum=0;
		for(k=0; k<col1; k++)
		  sum = sum+ a[i][k]*b[k][j];	
 	
		c[i][j]=sum;   	   
	}
			
}

printf("1st matrix-\n");
for(i=0; i<row1; i++)
{
	for(j=0; j<col1; j++)
	{
		printf("%d\t",a[i][j]);	
	}
printf("\n");
}

printf("2nd matrix-\n");
for(i=0; i<row2; i++)
{
	for(j=0; j<col2; j++)
	{
		printf("%d\t",b[i][j]);	
	}
printf("\n");
printf("after multiplication\n ");
for(i=0; i<row1; i++)
{
	for(j=0; j<col2; j++)
	{
		printf("%d\t",c[i][j]);	
	}
printf("\n");
}

}
else 
printf("multiplication can't perform");

return 0;
}
