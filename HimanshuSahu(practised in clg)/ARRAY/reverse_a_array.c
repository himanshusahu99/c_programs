#include<stdio.h>
int main()
{
 int a[10], i,temp,n,j,t;
  printf("enter size of array ");
  scanf("%d",&n);

printf("enter array ");
// entering array
 for(i=0; i<n; i++)
{
	scanf("%d",&a[i]);
}


for(i=0,j=n-1; i<=j; i++,j--)
{
	temp = a[i];
	a[i]=a[j];
	a[j]=temp;
}




printf("after reversing \n");
for(i=0; i<n; i++)
printf("%d\t",a[i]);

return 0;

}


