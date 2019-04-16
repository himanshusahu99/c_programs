

#include<stdio.h>

int show(int n,int m)
{
    int s,b,i,j,k;


  s=0;

   j=n;
    while(j!=0)
    {
      i=j%10;
      i=i*i*i;
      s=s+i;
      j=j/10;

    }

    if(s==n)
    {
    printf("%d is a armstrong no.",n);
    }
    else
    {
        printf("%d is not a armstrong no.", n );
    }
}

int main()

{
int a,b;
printf("enter two no. ");
scanf("%d", &a);
show(a,b);
return 0;
}

