#include<stdio.h>

int main()
{
int k,n,arm,j;

arm=0;
printf("enter no. ");
scanf("%d",&n);
k=n;
arm=0;

j=n%10;
arm=arm+j*j*j;
n=n/10;

j=n%10;
arm=arm+j*j*j;
n=n/10;

j=n%10;
arm=arm+j*j*j;

if(arm==k)
{printf("YES\n");}
else printf("NO\n");


return 0;

}
