#include<stdio.h>
#include<malloc.h>

int main ()
{

    int *p=(int *)malloc(sizeof(int));
    int *q=(int*)malloc(sizeof(int));
    int  c;

    printf("enter two no. ");
    scanf("%d%d",p,q);

    c= *p + *q;
    printf("%d",c);

    free(p);
    free(q);

    return 0;

}
