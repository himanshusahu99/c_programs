#include<stdio.h>

int rev1=0;

int rev(int a)
{
   int j;

    j=a%10;
    if (a==0)
    {
        printf(" reverse = %d",rev1);
       return;
    }


     rev1=rev1*10+j;
    rev(a/10);

}

int main ()
{
    int n;

    printf("Enter no. ");
    scanf("%d",&n);
    rev(n);

   return 0;
}
