#include<stdio.h>
int main ()
{
  int a,b,c;
  int *p=&a, *k=&b, *j=&c;

  printf("enter two no. ");
  scanf("%u%u%u", p, k, j);

  if(*p > *k && *p>*j)
    printf("%u is greater ", *p);
  else  if(*k > *p && *k>*j)
    printf("%u is greater ", *k);
  else if(*j > *k && *j>*k)
    printf("%u is greater ",*j);

    return 0;

}
