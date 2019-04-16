#include<stdio.h>
int main()
{
    int i;
    char a[300];

    FILE *jp1,*jp2;

    printf("enter string ");
    gets(a);

    jp1=fopen("u3.txt","w");
    jp2=fopen("l3.txt","w");

    for(i=0; a[i]='\0'; i++)
    {
        if (a[i]>='a' && a[i]<='z')
        {
            fputc(a[i]-32,jp1);
        }

        if(a[i]>='A' && a[i]<= 'B')
        {
            fputc(a[i]+32,jp2);

        }


    }

    fclose(jp1);
    fclose(jp2);

    return 0;

}
