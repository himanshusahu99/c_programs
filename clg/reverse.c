#include<stdio.h>

int main()
{ 
 int num,sum,j,k,rev;

printf("enter 4 digit no. ");
scanf("%d",&num);

rev=0;
j=num%10;
rev=rev*10+j;
num=num/10;
j=num%10;
rev=rev*10+j;
num=num/10;
j=num%10;
rev=rev*10+j;
num=num/10;
j=num%10;
rev=rev*10+j;
num=num/10;
j=num%10;
rev=rev*10+j;


printf("n0umber in reverse order = %d\n",rev);





 
 


return 0;

}

