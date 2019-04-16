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
               f=1;
               break ;
           }
          }

          for (k=j; k>=i; k--)
          {
              printf("%c",a[k]);

          }
          if (f==1)
              {
                  break;
              }
         i=j;

          }



   return 0;
}
