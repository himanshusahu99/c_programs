#include<conio.h>
#include<stdio.h>

int main()
{
 int i=0;
  char a[30],c;
  printf("enter name ");
  scanf("%s",a);

 printf("vow- ");
  for (i=0; a[i]!='\0'; i++)
  {
      if (a[i]=='A' || a[i]=='E' || a[i]== 'I' || a[i]=='O' || a[i]=='U')
      { c=a[i]+32;
       printf("%c, ",c);

      }

  if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
     {
         c=a[i]-32;
         printf("%c, ",c );
     }


}  return 0;
}
