#include<conio.h>
#include<stdio.h>

int show(int n, int m)
{
    int s,i,k;

printf("prime no. are- ");

// prime no. print krane ke liye

  for(k=n;k<=m; k++)
  { s=0;


    for(i=1; i<=k/2; i++)
    {

    if(k%i==0)
    {
        s=s+i;
     }

    }

    if(s==1)
    {
    printf("%d\n",k);
    }
  }
}
int main()
{
int a,b;
printf("enter no.");
scanf("%d%d", &a,&b);
show(a,b);
return 0;
}

