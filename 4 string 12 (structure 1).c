#include<stdio.h>
#include<string.h>

int main()
{
    char a[30],c[30],k;

    int i,j,l,t,z;

    printf("enter string ");
    gets(a);

    for(i=0; a[i]!='\0'; i++)
    {
      for(j=0; j<=i; j++)
      {
          printf("%c", a[j]);
      }
      printf("\n");
    }

     z=strlen(a);

    for(i=0; a[i]!='\0'; i++)
    {
        for(j=0; j<=z-i-2; j++)
        {
            printf("%c", a[j]);
        }
    printf("\n");
    }

return 0;
}
