#include<stdio.h>

int k=0;
int prim(int n, int m)
{
    if (n==0)
    {
        if (k==1)
            printf("YES");
        else
            printf("NO");

        return;

    }

       if (m%n==0)
       {
           k++;
       }

    prim(n-1,m);




}

int main ()
{
    int n;
    printf("enter no. ");
    scanf("%d",&n);
    prim(n/2,n);
    return 0;
}
