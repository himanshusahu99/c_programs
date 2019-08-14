// Count the sum of the digit of number 

#include<stdio.h>
int main()
{
int sum=0,num,j;

printf("enter a Number ");
scanf("%d",&num);

while(num>0)
{
 j=num%10;
 sum=sum+j;
 num=num/10;
}
printf("sum of digit = %d \n ", sum);

return 0;



}
