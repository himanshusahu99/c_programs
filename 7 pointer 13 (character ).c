#include<stdio.h>
int main()
{
    int i;
    char c[30];
    char *p=c;
    gets(p);

    for(i=0; *(p+i)!='\0'; i++)
    {
        printf("%c",*(p+i));
    }

    return 0;
}
