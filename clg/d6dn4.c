#include<stdio.h>
int main()
{
  
int num;
printf("entre no. ( between 0-100)");
scanf("%d", &num);

if( num % 6==0 && num%4 != 0)
{
   printf(" YES ");
}
 
else 
{  printf(" NO ");
}



}
