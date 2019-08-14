// Count the product of the digits of number 

#include<stdio.h>
int main()
{
int prd=1,num,j;

printf("enter a Number ");
scanf("%d",&num);

while(num>0)
{
 j=num%10;
 prd=prd*j;
 num=num/10;
}
printf("Product of digit = %d \n ", prd);

return 0;



}
