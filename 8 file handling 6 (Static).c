#include<stdio.h>
int show()
{
  static  int a=4;
    a=a+2;

    if(a==10)
     {

    return;
     }
    show();
       printf("%d\n",a);
}


int main ()
{
    show();


    return 0;
}
