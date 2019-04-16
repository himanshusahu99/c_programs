#include<stdio.h>

struct grtr
{
 int a,b,c;

};

int main ()
{
    struct grtr j;
    printf (" enter no. ");
    scanf("%d%d%d", &j.a, &j.b, &j.c);

    if ( j.a> j.b && j.a > j.c)
    {
        printf("%d is greater", j.a);
    }
    else if (j.b > j.a && j.b > j.c)
    {
         printf("%d is greater ");
    }

    else if  ( j.c > j.a && j.c > j.b)
    {
        printf(" %d is greater ", j.c);
    }

    return 0;
}
