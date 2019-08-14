#include<stdio.h>
int main()
{

int num, ori, rev, j;


printf("enter 5 digit no.  ");
scanf("%d", &num);

ori=num;

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

if(ori==rev)
printf("palindrome");
else printf("Not palindrome ");

printf("\n");
return 0;
}

