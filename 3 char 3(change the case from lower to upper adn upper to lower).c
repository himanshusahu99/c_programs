#include<conio.h>
#include<stdio.h>

int main()
{

char a,b,c;

printf("enter no\n");
scanf("%c", &a);

if(a>='A' && a<='Z')
{
  // change krne ke liye +32 ya -32 krenge

  c= a+32;
  printf("%c", c);
}

else if(a>='a' && a<='z')
{
   c=a-32;
    printf("%c\n", c);
}

else if(a>='1' && a<='9')
{
    printf("%c", a);
}

else
{
    printf("%c", a);
}

return 0;}

