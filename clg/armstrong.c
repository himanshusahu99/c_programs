#include<stdio.h>

int main()
{
int k,i,n,arm,j;


for(i=100; i<102; i++)
{ arm=0;
  k=i;
  while(i!=0)
 { 
   j=i%10;
  arm=arm+j*j*j;
   i=i/10;
  }

if(arm==k)
printf("YES");
else printf("NO");


} 

return 0;

}
