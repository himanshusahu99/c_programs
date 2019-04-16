#include<conio.h>
#include<stdio.h>

int show(int n)
{
    int s,i;

  s=0;

    for(i=1; i<=n/2; i++)
    {

    if(n%i==0)
    {
        s=s+i;
     }

    }

    if(s==1)
    {
    printf("%d is a prime no.",n);
    }
    else
    {
        printf("%d is not a prime no.", n);
    }
}
int main()
{
int a;
printf("enter no.");
scanf("%d", &a);
show(a);
return 0;
}

