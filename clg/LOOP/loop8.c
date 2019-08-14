// Count the no of the digit 
#include<stdio.h>
int main()
{
int count=0,num;

printf("enter a Number ");
scanf("%d",&num);

while(num>0)
{
 num=num/10;
 count++;
}
printf("%d \n ", count);

return 0;



}
