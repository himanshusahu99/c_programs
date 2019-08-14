#include<stdio.h>
int main()

{

 int s1,s2,s3,sum;
printf("enter 3 side of the triangle ");
scanf("%d%d%d",&s1,&s2,&s3);

if (s1>s2 && s1>s3)
	{ sum=s2+s3;
           if (sum>s1)
		printf("Valid");
	   else 
		printf("NOT VALID");
	} 

if (s2>s3 && s2>s1)
	{ sum=s1+s3;
           if (sum>s2)
		printf("Valid");
	   else 
		printf("NOT VALID");
	} 

if (s3>s1 && s3>s1)
	{ sum=s1+s2;
           if (sum>s3)
		printf("Valid");
	   else 
		printf("NOT VALID");
	} 


printf("\n");
return 0;



} 
