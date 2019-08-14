#include<stdio.h>
int power(int,int);
float fact(int);

int main()
{
 int a,b,p,term,i;
  float sum=0.0;
  printf("enter the no. of terms ");
  scanf("%d",&term);
  
for(i=1; i<=term; i++)
   sum=sum + power(i,2)/fact(i);

printf("sum = %f",sum);

 
  return 0; 

}

int power(int a,int b)
{
  int i,p=1;
  for(i=1; i<=b; i++)
 	p=p*a;

  return (p); 
}

float fact (int x)
{
 int i;
 float f=1;
  for(i=x; i>=1; i--)
	f=f*i;

 return f;	
}

