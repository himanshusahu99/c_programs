#include<stdio.h>
int fact(int);
int main()
{
 int a,b,p;
  printf("enter the no. ");
  scanf("%d",&a);
  p=fact(a);

 printf("ans. = %d",p);
  return 0; 

}

int fact(int x)
{
 int i,p=1;
  for(i=x; i>=1; i--)
	p=p*i;

 return p;	
}
