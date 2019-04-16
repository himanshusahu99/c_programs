#include <stdio.h>
#include<conio.h>

int main()
{
    char a[30];

    int i, l,k;


    printf("Enter name ");
    gets(a);


    l = 0;

    for(i=0; a[i]!='\0'; i++)
    {
          l++;
    }

    k = 0;

    for(i=0; i<l; i++)
   {
        if(a[i] != a[l-1-i])
    {
            k++;

    }
   }

    if ( k==0)
    {
        printf("%s is  palindrome", a);
    }
    else
    {
        printf("%s is not a palindrome", a);
    }


    return 0;
}
