#include<stdio.h>
int power(int,int);
int main()
{
 int a,b,p;
  printf("enter the no. and power ");
  scanf("%d%d",&a,&b);
  p=power( a, b);

 printf("ans. = %d",p);
  return 0; 

}

int power(int x, int y)
{
 int i,p=1;
  for(i=1; i<=y; i++)
	p=p*x;

 return p;	
}
