#include<stdio.h>
#include<conio.h>

// func arg me scan hum main me karate hain, lekin execute dusre function me krete hain

void show(int n, int m)
{
    printf("%d %d", n, m);
 }

    void main()
{
int a,b;

printf("enter no.");
scanf("%d%d", &a,&b);
show(a,b);

    return 0;
}
