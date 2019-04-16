#include<stdio.h>

int main ()
{
    int i,j;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=10-i; j++)
        {
            printf(" ",j);

        }
    }


    for(i=1; i<=5; i++)
    {

        for(j=i; j>=i; j--)
         {
            printf("%d",j);
         }

        printf("\n");
    }

}
