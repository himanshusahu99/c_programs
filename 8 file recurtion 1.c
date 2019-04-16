#include<stdio.h>
int sum(int a)
{

    if (a==5)
    {
       return;
    }

    sum(a+1);

    printf("%d",a);
    printf("%d",a);
    printf("%d",a);
    printf("%d\n",a);



}

int main ()
{
    int n=1;
    sum(n);
    return 0;
}
