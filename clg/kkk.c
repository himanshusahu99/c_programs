#include<stdio.h>

int main()
{ 
 int num,sum,j,k,rev;

printf("enter 4 digit no. ");
scanf("%d",&num);

rev=0;
j=num%10;
rev=rev+j*10000;
num=num/10;
j=num%10;
rev=rev+j*1000;
num=num/10;
j=num%10;
rev=rev+j*100;
num=num/10;
j=num%10;
rev=rev+j*10;
num=num/10;
j=num%10;
rev=rev+j*1;


printf("n0umber in reverse order = %d",rev);





 
 


return 0;

}

