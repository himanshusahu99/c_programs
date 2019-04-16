#include<conio.h>
#include<stdio.h>

int main()
{
 int i;
char a[30],o,j,k;

printf("Enter name- ");
scanf("%s", a);

printf("vow are = ");
for(i=0; a[i]!='\0'; i++)
{


   if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
   {
     printf("%c, ",a[i]);
   }

    if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')

   {
       printf("%c, ",a[i]);

   }

}
return 0;
}

