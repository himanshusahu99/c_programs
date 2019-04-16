#include<stdio.h>

 int a=0,b=1;


int fib(int n, int k)
{
  // printf("%d %d ",a,b);
    int c;

    if (k== (n-2) )
    {
        return;
    }

    c=a+b;

    fib(n, k++);

    printf("%d ",c);
    a=b;
    b=c;


}

int main()
{
    int num,k=0;
printf("enter no. ");
scanf("%d",&num);
fib(num,k);


return 0;
}
