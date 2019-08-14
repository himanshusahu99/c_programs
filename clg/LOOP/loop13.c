// print fibonacci series.  

#include<stdio.h>
int main()
{
int a=0,b=1,c,i,term;
printf("enter no. of terms ");
scanf("%d",&term);

printf("%d\t %d",a,b);
i=3;
while(i<=term)
{
  c=a+b;
printf("\t %d",c);
 a=b;
 b=c;

i++; 
}


printf("\n");

return 0;



}
