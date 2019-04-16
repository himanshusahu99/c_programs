#include<stdio.h>

void method_1(int [][4],int,int);
void method_2(int(*arr)[4],int,int);
void method_3(int *arr ,int,int);
int main()
{
	int a[3][4]= {  1,2,3,4,
			7,3,6,3,
			5,7,3,7
		     };

//3 tarah se kr skte hain
method_1(a,3,4);
method_2(a,3,4);
method_3(a,3,4);
return 0;
}

void method_1(int a[][4],int r,int c)
{
 int i,j;
 
 printf("\n1st method\n");
 for(i=0; i<r; i++)
{
  for(j=0; j<c; j++)
	printf("%d\t",a[i][j]);
   printf("\n");
}
}

void method_2(int (*arr)[4], int r,int c)
{

 int *p,i,j;
   
 printf("\n2nd method\n");
	for(i=0; i<r; i++)
	{  
		p=(int*)(arr+i);
		for(j=0; j<c; j++)
			printf("%d\t",*(p+j));
		printf("\n");
	}

}

void method_3(int *arr, int r, int c)
{
 int i,j;
  
 printf("\n3rd method\n");
for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
			printf("%d\t",*(arr+i*c+j));	
	 printf("\n");
	}

}
