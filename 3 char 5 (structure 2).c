#include<conio.h>
#include<stdio.h>

int main()
{

char a,i,j,k;

for (i='A'; i<='E'; i++)
{
    for(j='A'; j<=i; j++)
   {

   printf("%c", j);
    }

    for(k=i-1; k>='A'; k--)
    {
        printf("%c", k);
    }

printf("\n");
}



return 0;}

