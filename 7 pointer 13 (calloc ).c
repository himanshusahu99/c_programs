#include<stdio.h>
int main()
{

    int size,i;
    printf("ENter size of array ");
    scanf("%d",&size);

    int *p=(int*)calloc(sizeof(int),size);

    for (i=0; i<size; i++)
    {
        scanf("%d",(p+i));

    }


    for (i=0; i<size; i++)
    {
        printf("%d", *(p+i));
        printf("\n");
    }

    return 0;
}
