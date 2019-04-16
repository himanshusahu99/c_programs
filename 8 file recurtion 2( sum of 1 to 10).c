#include<stdio.h>

int s=0;
int sum(int a)
{
   int i,k;

    if (a==0)
    {
        printf("%d",s);
       return;
    }


     s=s+a;
    sum(a-1);

}

int main ()
{
    int n=10;
    sum(n);

   return 0;
}
