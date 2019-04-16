#include<stdio.h>
int main()
{
 int a[10], i,pos,n;
  printf("enter size of array ");
  scanf("%d",&n);

printf("enter array ");
// entering array
 for(i=0; i<n; i++)
{
	scanf("%d",&a[i]);
}
//item or uska position dalo
printf("enter position ");
scanf("%d",&pos);

for(i=pos; i<=n-1; i++)
{
	a[i-1]=a[i];
}


n=n-1;

printf("after deleting \n");
for(i=0; i<n; i++)
printf("%d\t",a[i]);

return 0;

}


