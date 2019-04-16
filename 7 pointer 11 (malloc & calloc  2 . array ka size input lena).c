#include<stdio.h>
#include<malloc.h>

int main ()
{
    int size,i;
    printf("enter size of array ");
    scanf("%d",&size);

    int *p=(int*)malloc(sizeof(int)*size);


  printf("enter array ");
    for(i=0; i<size; i++)
    {
        scanf("%d",(p+i));
    }
for(i=0; i<size; i++)
    {
        printf(" %d\n",*(p+i));
    }

free(p);
return 0;
}
