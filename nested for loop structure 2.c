#include<stdio.h>

int main ()
{

int i,j,k,l;

for (i=1; i<=5; i++)
{

    for(j=5; j>=i; j--)
    {
      printf(" ",j);
    }

    for(j=1; j<=i; j++)
    {
       if (j==1)
       {printf("*");}
       else printf(" ");
    }

    for(j=i-1; j>=1; j--)
    {
       if (j==1)
       {printf("*");}
       else printf(" ");
    }
    printf("\n");

}
return 0;

}
