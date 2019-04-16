#include<stdio.h>

int main ()
{

int a,i,b;
int *p=&a, *k=&b;

printf("enter two no ");
scanf("%u%u",p,k);

for (i=*p; i<=*k; i++)
{
    if(i%2==0)
    { printf("%u is even\n", i); }
    else
      { printf("%u is odd\n", i); }

}

return 0;


}
