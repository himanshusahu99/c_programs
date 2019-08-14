#include<stdio.h>
int main()

{
  int hr;
printf("Eneter hours ");
scanf("%d",&hr);

if (hr>=2 && hr<=3)
printf("highly efficient");
 
else if (hr>3 && hr<=4)
printf("You should improve your speed");

else if (hr>=4 && hr<=5)
printf("training ");

else 
printf("leave the company");



printf("\n");
return 0;



} 
