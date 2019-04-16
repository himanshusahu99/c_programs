#include<stdio.h>
int main ()
{
    char c;
    int a=0,n=0;
    FILE *jp,*jp1,*jp2;


  jp= fopen("Naamkanaam.txt", "r");
  jp1=fopen("l4.txt","w");
  jp2=fopen("l5.txt","w");

  while(1)
  {
      c=fgetc(jp);
//printf("%c",c);
      if(c==EOF)
         break;
      if(c>='A' && c<='Z')
        {
         printf("%c",c+32);
         fputc(c+32,jp1);
        }
      else if(c>='a' && c<='z')
  {
          printf("%c",c-32);

         fputc(c-32,jp1);
  }


  }


    fclose(jp);
    fclose(jp1);
    fclose(jp2);

  return 0;


}
