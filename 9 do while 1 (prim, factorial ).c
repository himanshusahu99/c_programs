#include<stdio.h>
int main ()
{
 int i,n1,k;
 char ch;

 do
 {
     printf("enter 1 to check prim no.\n ");
     printf("enter 2 for factorial ");

     scanf("%d",&i);

     switch(i)
     {

     case 1:
         k=0;
        printf("enter no. ");
        scanf("%d",&n1);

        for(i=1; i<=n1/2; i++)
        {
             if (n1%i==0)
             {
                 k++;
             }
        }

        if (k==1)
          printf("prim no.");
        else
            printf("not a prime no. ");

        break;

     case 2:
        printf("enter no. ");
        scanf("%d",&n1);
        k=1;
        for (i=n1; i>0; i--)
        {
            k=k*i;
        }
        printf("\nfactorial = %d",k);

        break;

    default:
        printf("enter valid no. (1 or 2)");


     }

 printf("\n do you want to calculate again(enter Y/N)");
 scanf(" %c",&ch);

 }while (ch!='N');


 return 0;
}
