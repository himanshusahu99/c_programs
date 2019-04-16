#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float a,b,c;
    char k;

    printf("enter two no. ");
    scanf("%f%f",&a,&b);
    printf("choose operation ( + - * / ) - ");
    fflush(stdin);

    scanf("%c",&k);
    switch (k)
    {
        case '+':
         c=a+b;
    break;

        case '-':
        c=a-b;
    break;

        case '*':
         c= a*b;
    break;

         case '/':
         c= a/b;
    break;
    }
  printf(" Your result = %10.3f\n", c);

  return 0;
}
