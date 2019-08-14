#include<stdio.h>
int main ()
{
int large,a,b,c;
printf("3 no. \n");
scanf("%d%d%d",&a,&b,&c);

large= (a>b) ? ( (a>c)? a:c ): ( (b>c) ? b:c );

printf("large %d ",large);
printf("\n");

return 0;


}
