#include<conio.h>
#include<stdio.h>

int armstrong(int a,int b)
{
    int s, k,i,j,q,r,t;


  j=0;
  printf("armstrong no. are- ");
    for(i=a; i<=b; i++)
     { q=i; s=0;
         while(q!=0)
         {
             k=q%10;
             k=k*k*k;
             s=s+k;
             q=q/10;
         }
         if(s==i)
         {
             printf(" \n%d\n", i);
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

    c=armstrong(m,n);

    printf("addition of total armstrong no. - %d\n",c);
    return 0;

}
