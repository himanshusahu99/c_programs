#include<stdio.h>


int show(int*a,int*b,int*c,int*d,int*e)
{
    *c=*a+*b;
    *d=*a * *b;
    *e=*a / *b;
}
int main()
{
    int a,b,c,d,e;
    printf("enter no. ");
    scanf("%d%d",&a,&b);
    show(&a,&b,&c,&d,&e);

    printf("+ = %d\n * = %d\n / = %d",c,d,e);
    return 0;
}
