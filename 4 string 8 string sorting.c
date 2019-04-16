#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{

    char a[30],c[30],k;

    int i,l,j,t,f;
    printf("Enter name ");
    gets(a);
    printf("%s\n",a);




  // string sorting

    for(i=0; a[i]!='\0'; i++)
    {

      for(j=i+1; a[j]!='\0'; j++)
      {

         if (a[i]>a[j])
        {
           k=a[i];
           a[i]=a[j];
           a[j]=k;
            }

       }
    }

    printf("%s",a);

   return 0;
}
