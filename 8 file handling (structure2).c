#include<stdio.h>
#include<math.h>

int main ()
{

 int i,j,a=11,b,c,d,e,f;

f=0;

 for (i=1; i<=4; i++)
    {
        for(j=i; j<=4; j++)
        {
            printf(" ");
        }


  e=1;

    while(e!=0)

   {
           b=pow(11,f);
            while(b!=0)
            { c=b%10;
              printf(" %d",c);
              b=b/10;

            }

            f++;
            e=e/10;
   }

        printf("\n");
   }

return 0;
}
