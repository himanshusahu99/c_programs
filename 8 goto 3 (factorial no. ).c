#include<stdio.h>
int main ()
{
    int i=0, n1, fact=1;

    printf("enter any no ");
    scanf("%d",&n1);

    A:
        i++;
        fact=fact*i;

        if(i==n1)
        {
            printf("\n Factorial = %d",fact);
            goto B;
        }
      goto A;

      B:
        return 0;


}
