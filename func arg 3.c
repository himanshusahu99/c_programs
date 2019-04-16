#include<conio.h>
#include<stdio.h>

int show(int m int n int o)
{
    int s,i;

  s=0;

    for(i=1; i<=n/2; i++)
    {

    if(n%i==0)
    {
        s++;
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
int a,b,c;
printf("enter three no.");
scanf("%d%d%d", &a,&b,&c);
show(a,b,c);
return 0;
}

