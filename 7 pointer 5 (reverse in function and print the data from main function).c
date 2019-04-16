#include<stdio.h>

int rev(int *p)
{
    int j,rev=0;


    while(*p!=0)
    {
        j=*p%10;
        rev=rev*10+j;
        *p=*p/10;
    }
    *p=rev;

}

int main ()
{
  int n,a;
  printf("enter number ");
  scanf("%d",&n);
  rev(&n);
  printf("%d",n);
  return 0;


}
