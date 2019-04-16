#include <stdio.h>
#include<conio.h>

int main()
{
    char a[30];

    int i, l,k;


    printf("Enter name ");
    gets(a);
    printf("%s\n",a);

    l = 0;

    for(i=0; a[i]!='\0'; i++)
    {
          l++;
    }

   for(i=l-1; i>=0; i--)
   {
       printf("%c", a[i]);
   }


    return 0;
}
