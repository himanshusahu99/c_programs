#include<stdio.h>

int main ()
{
     char c[100];
    int i;
    FILE *jp;



    printf("enter name ");
    gets(c);

   jp= fopen("a.txt","w");

    for (i=0; c[i]!='\0'; i++)
    {
        fputc(c[i],jp);
    }

    fclose(jp);
    return 0;



}
