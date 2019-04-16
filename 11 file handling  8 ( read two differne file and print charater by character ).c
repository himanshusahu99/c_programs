#include<stdio.h>
int main ()
{
    int i,c1,c2;
    char c,n1,n2;
    FILE *jp,*jp1,*jp2;


    jp= fopen("char1.txt", "r");
    jp1=fopen("char2.txt","r");
    jp2=fopen("l5.txt","w");




    i=1;
    while(i)
    {

        if (i%2==0)
        {
            c=fgetc(jp);

            if (c==EOF)
                break;

            fputc(c,jp2);
        }

        if (i%2!=0)
        {
            c=fgetc(jp1);


            if (c==EOF)
                break;

            fputc(c,jp2);
        }






        i++;

    }


    fclose(jp);
    fclose(jp1);
    fclose(jp2);

    return 0;


}
