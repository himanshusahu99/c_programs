#include<stdio.h>
int main()

{
 float cl_h, cl_at, pr_at;
printf("entet total held -");
scanf("%f",&cl_h);
printf("enter total attended classes ");
scanf("%f",&cl_at);
pr_at=cl_at*100/cl_h;
 printf("your attendence =  %2.00f\n",pr_at);

if(pr_at > 75)
{
  printf("you are allowed ");
}

else
{ printf("you are not allowed");
} 

  printf("\n");
return 0;


}

