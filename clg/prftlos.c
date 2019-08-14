#include<stdio.h>

int main()
{
  int cp,sp,extra;
  printf("enter selling price " );
   scanf("%d",&sp);
  printf("enter cost price ");
  scanf("%d",&cp);

  extra=sp-cp;

 if(extra > 0)
printf("profit = %d",extra);
 
 else if (extra < 0 )
printf("loss= %d", -1*extra);

 else 
printf("profit = loss = 0");

printf("\n");
return 0; 
    


}
