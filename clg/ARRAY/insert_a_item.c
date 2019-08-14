#include<stdio.h>
int main()
{
 int a[10], i,item,pos,n;
  printf("enter size of array ");
  scanf("%d",&n);

printf("enter array ");
// entering array
 for(i=0; i<n; i++)
{
	scanf("%d",&a[i]);
}
//item or uska position dalo
printf("enter position and item ");
scanf("%d%d",&pos,&item);

for(i=n-1; i>=pos-1; i--)
{
	a[i+1]=a[i];
}

a[pos -1 ]=item;
n=n+1;

for(i=0; i<n; i++)
printf("%d\t",a[i]);

return 0;

}


