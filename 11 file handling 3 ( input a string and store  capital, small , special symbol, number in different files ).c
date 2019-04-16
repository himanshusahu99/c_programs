#include<stdio.h>

int main ()
{
     char c[100];
    int i;
    FILE *jp1,*jp2,*jp3,*jp4;



    printf("enter name ");
    gets(c);

   jp1= fopen("u.txt","w");
   jp2=fopen("l.txt", "w");
   jp3=fopen("d.txt","w");
   jp4=fopen("s.txt","w");

    for (i=0; c[i]!='\0'; i++)
    {
        if (c[i]>='A' && c[i]<='Z')
            fputc(c[i],jp1);

        else if (c[i]>='a'&& c[i]<='z')
            fputc(c[i],jp2);

        else if (c[i]>='1' && c[i]<='9')
            fputc(c[i],jp3);

        else
            fputc(c[i],jp4);

    }

    fclose(jp1);
    fclose(jp2);
    fclose(jp3);
    fclose(jp4);

    return 0;



}
