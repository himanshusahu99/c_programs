#include<conio.h>
#include<stdio.h>

int prime(int a,int b)
{
    int s, k,i,j;

 j=0;

    for(i=a; i<=b; i++)
    {
      s=0;
        for (k=1; k<=i/2; k++)
      {
        if(i%k==0)
        {
            s++;
        }
      }
       if(s==1)
     { printf("%d\n", i);
         j=j+i;
     }
    }
    return j;
}

int main()
{

    int m,n, c;
 printf("enter no.");
 scanf("%d%d",&m,&n);

    c=prime(m,n);

    printf("addition of total prime no. - %d\n",c);
    return 0;

}
