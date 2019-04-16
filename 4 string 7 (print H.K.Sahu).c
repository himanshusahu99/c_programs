#include<stdio.h>
#include<conio.h>

int main()
{
    char a[30];

    int i, l,k,j,t,f;


    printf("Enter name ");
    gets(a);
    printf("%s\n",a);





    for(i=0; a[i]!='\0'; i++)
    {
        f=0;

      for(j=i; a[j]!=' '; j++)
         {
           if(a[j]=='\0')
           {
                for(k=i; a[k]!='\0'; k++)
                {
                    printf("%c",a[k]);
                }
               f=1;
               break ;
           }
          }

         if(f==0)
         {
             printf("%c.",a[i]);
         }

          if (f==1)
             {

                  break;
              }
         i=j;

          }



   return 0;
}
