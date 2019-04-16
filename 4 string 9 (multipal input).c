#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{

    char a[5][30];

    int i,l,j,t,f;

  printf("Enter name ");
  t=4;

   for (i=0; i<t; i++)
   {
       gets(a[i]);
   }

   for (i=0; i<5; i++)
   {printf("%s\n",a[i]);

   }


   return 0;
}
