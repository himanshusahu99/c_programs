#include<stdio.h>
void add(int,int);
 int main()
{
  int a, b,c;
   scanf("%d%d",&a,&b);
   add(a,b);
  
  
return 0;

}

void add(int x, int y)
{  int c;
    c=x+y;
   printf("sum= %d",c);
 	
}

