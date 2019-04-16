#include<stdio.h>
int main()
{
  FILE *jp;

 jp=  fopen("H.txt","w");
  fputc('1', jp);
  fputc('2', jp);
  fclose(jp);

  return 0;

}
