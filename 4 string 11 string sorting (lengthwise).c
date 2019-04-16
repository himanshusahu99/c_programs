#include<stdio.h>
#include<string.h>

int main()
{

    char a[5][30], c[5];

    int i,l,j,t,f;

  printf("Enter name ");

  // multipal naming input ke liye

   for (i=0; i<5; i++)
   {
       gets(a[i]);
   }


  printf("\n");

   for (i=0; i<5; i++)
   {
       for(j=i+1; j<5; j++)
       {
             if ( strcmp(a[i],a[j])>0 )
               {
                  strcpy(c,a[i]);
                  strcpy(a[i],a[j]);
                  strcpy(a[j],c);

               }
           }
       }


for (i=0; i<5; i++)
{
    printf("%s", a[i]);
}


   return 0;
}
