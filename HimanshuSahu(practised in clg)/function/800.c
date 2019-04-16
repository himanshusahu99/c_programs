#include<stdio.h>

void swap(int*,int*);

int main()
{
int a,b,add,;
printf("enter a & b");
scanf("%d%d",&a,&b);


calc(&a,&b);
printf("add = %d",add);
printf("sub = %d",sub); 
printf("mul = %d",mul);
 
 return 0;
}

void swap(int *a,int *b)
{

 int temp;
  temp = *a;
   *a   =  *b;
   *b   =  temp;


}
