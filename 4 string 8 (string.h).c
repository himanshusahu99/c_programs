#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{

    char a[30],c[30];

    int i,l,k,j,t,f;
    printf("Enter name ");
    gets(a);
    printf("%s\n",a);




k=0;
    for(i=0; a[i]!='\0'; i++)
    {

      for(j=i+1; j!='\0'; j++)
      {
        k= strcmp(a[i],a[j]);

         if (k>0)
        {
           strcpy(c[j],a[i]);
           strcpy(a[i],a[j]);
           strcpy(a[j],c[j]);

            }

       }
    }
   for(i=0; a[i]!='\0'; i++)
   {
       printf("%c", a[f]);
   }

   return 0;
}
