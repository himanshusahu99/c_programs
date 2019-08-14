// sum of all natural no. from 1 to n using while loop

#include<stdio.h>
int main ()
{
int i=1,n, sum=0;;
printf("entet n " );
scanf("%d",&n);

printf("sum of Natural numbers are = \n");
while(i<=n)
 {
 sum+=i;  
 i++;

 }

printf("%d \n",sum);
return 0;


}
