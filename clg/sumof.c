#include<stdio.h>

int main()
{ 
 int num,sum,j;

printf("enter digit no. ");
scanf("%d",&num);

sum=0;
j=num%10;
sum=sum+j;
num=num/10;
j=num%10;
sum=sum+j;
num=num/10;
j=num%10;
sum=sum+j;
num=num/10;
j=num%10;
sum=sum+j;
num=num/10;
j=num%10;
sum=sum+j;


/*j=num%10;
sum=sum+j;*/
printf("sum of digit = %d",sum);





 
 


return 0;

}

