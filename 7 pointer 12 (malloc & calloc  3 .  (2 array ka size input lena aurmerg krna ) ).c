#include<stdio.h>
#include<malloc.h>

int main ()
{

    int size1,size2,size3,i;
    printf("enter size of 1st array ");
    scanf("%d",&size1);
    printf("enter size of 2nd array ");
    scanf("%d",&size2);

    size3=size1+size2;

  printf("enter array ");
    int *p=(int *)malloc(sizeof(int)*size3);

    for(i=0; i<size3; i++)
    {
     scanf("%d",(p+i));
    }

    printf("\n\n");

    for(i=0; i<3; i++)
    {
        printf("%d\n",*(p+i));
    }

    free(p);
    return 0;




}
