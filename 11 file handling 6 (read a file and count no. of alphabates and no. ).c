#include<stdio.h>
int main ()
{
    char c;
    int a=0,n=0;
    FILE *jp,*jp2;


  jp2= fopen("Aa.txt", "r");

  while(1)
  {
      c=fgetc(jp2);
      if(c>='0' && c<='9')
         n++;
      if (c>='a' && c<='z' || c>='A' && c<='Z')
         a++;
      if(c==EOF)
         break;


  }


    printf("%d %d",n,a);

    fclose(jp2);

  return 0;


}
