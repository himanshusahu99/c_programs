#include<stdio.h>

// swaping krna hai

int swap(int *p,int *k)
{
    int c;
    c=*p;
    *p=*k;
    *k=c;

}

int main ()
{
    int a,b;
    printf("enter no. ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d %d ", a,b);

    return 0;
}
