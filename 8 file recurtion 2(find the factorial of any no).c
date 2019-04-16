#include<stdio.h>

int f=1,j=0;
int fact(int a)
{
   int i;


    if (a<=0)
    {
        printf(" factorial = %d",f);
       return;
    }


     f=f*a;
    fact(a-1);
    printf(" %d",++j);

}

int main ()
{
    int n;

    printf("Enter no. ");
    scanf("%d",&n);
    fact(n);

   return 0;
}
