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
       //if (j==1)
       printf("%d",j);
       //else printf(" ");
    }

    for(j=i-1; j>=1; j--)
    {
       //if (j==1)
       printf("%d",j);
       //else printf(" ");
    }
    printf("\n");

}

 for (i=5; i>=1; i--)
{
    for (j=6-i; j<=5-i; j++)
    {
        printf("%d",j);
    }
    for (j=4; j>=1; j--)
        {
            printf("%d",j);

        }
     printf("\n");

}










return 0;

}
