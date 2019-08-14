// check the palindrom no. 

#include<stdio.h>
int main()
{
int rev=0,num,j,num2;

printf("enter a Number ");
scanf("%d",&num);

num2=num;
while(num2>0)
{
 j=num2%10;
 rev=rev*10+j;
 num2=num2/10;
}

if(rev==num)
	printf("YES"); 
else 
	printf("NO");

printf("\n");

return 0;



}
