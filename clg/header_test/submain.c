#include<stdio.h>
#include"sub.h"
int main()
{
 int a,b,c;
 printf("enter two no. ");
scanf("%d%d",&a,&b);
c = sub(a,b);
printf("sum= %d",c);
return 0;

}
