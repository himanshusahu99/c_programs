#include<stdio.h>
int add();
 int main()
{
  int s;
   s = add(); 
  printf("sum= %d",s);
  
return 0;

}

int add()
{ 
  int a,b,c;
 scanf("%d%d",&a,&b);
    c=a+b;
   return(c);
 	
}

