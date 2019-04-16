#include <stdio.h>


int main ()
{
    int i,j,a[5],k;
    int *p=a;

    for (i=0; i<5; i++)
    {
        scanf("%d",(p+i));
    }

    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            if ( *(p+i) > *(p+j) )
            {
                k=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=k;
            }
        }
    }

    printf("sorting ");
    for (i=0; i<5; i++)
    {
        printf(" %d \n",*(p+i));
    }

return 0;
}
