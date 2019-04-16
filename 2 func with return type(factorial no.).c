#include<conio.h>
#include<stdio.h>

int armstrong(int a,int b)
{
    int s, k,i,j,q,r,t;


  j=0;

  printf("factorials of different no. ");

    for(i=a; i<=b; i++)
     { t=1;
      for(k=1; k<=i; k++ )
      {
          t=t*k;

      }
      printf("\nfactorial of %d is %d\n",i ,t );
         j=j+t;


     }

 return j;
}

int main()
{

    int m,n, c;
 printf("enter no.");
 scanf("%d%d",&m,&n);

    c=armstrong(m,n);

    printf("addition of all factorial no.- %d\n",c);
    return 0;

}
