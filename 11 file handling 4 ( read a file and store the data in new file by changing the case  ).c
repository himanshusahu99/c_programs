#include<stdio.h>

int main()
{
    char a[100]; int i;
    FILE *jp1;

    printf("enter any word ");
    gets(a);


    jp1= fopen("casechange.txt", "w");

    for(i=0; a[i]!='\0'; i++)
    {
        if (a[i]>='A' && a[i]<='Z')
         {
          a[i]=a[i]+32;

        fputc(a[i],jp1);
         }

        else if (a[i]>='a' && a[i] <='z')
         {
             a[i]=a[i]-32;
             fputc(a[i],jp1);
         }

         else
            fputc(a[i],jp1);

    }


    fclose(jp1);




}
