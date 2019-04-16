#include<stdio.h>
int main ()
{
    char c;
    FILE *jp,*jp2;

 jp=  fopen("H.txt","w");
  fputc('1', jp);
  fputc('2', jp);
  fclose(jp);

  jp2= fopen("H.txt", "r");
  while (1)
  {
      c=fgetc(jp);
      if(c==EOF)
        break;
      else
        printf("%c",c);

  }

  return 0;


}
