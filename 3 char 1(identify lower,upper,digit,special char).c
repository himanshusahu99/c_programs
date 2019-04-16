#include<conio.h>
#include<stdio.h>

int main()
{

char a;

printf("enter no.\n");
scanf("%c",&a);

if(a>='A'&& a<='Z')
   {
       printf("upper case");
   }

else if(a>='a'&& a<='z')
{
    printf("lower case");
}

else if(a>='1' && a<='9')
{
    printf("digit");

}

else
{
    printf("special character");
}


return 0;}

