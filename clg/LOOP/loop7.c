// sum of all even  no. from 1 to n using while loop

#include<stdio.h>
int main ()
{
int i=1,n, sum=0;;
printf("entet n " );
scanf("%d",&n);

printf("sum of even  numbers are = \n");
while(i<=n)
 { 
  if (i%2==0)
   { sum+=i;  }  
 i++;

 }

printf("%d \n",sum);
return 0;


}
