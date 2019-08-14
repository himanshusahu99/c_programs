#include<stdio.h>
#include<math.h>
int main()
{
 in x1,x2,x3,y1,y2,y3,a,b,c;

 printf("entet fdjg " );
 scanf("%d%d",&x1,&y1);

 printf("entet fdjg " );
 scanf("%d%d",&x2,&y2);

 printf("entet fdjg " );
 scanf("%d%d",&x3,&y3);

a=abs(x2-x1)/(y2-y1);
b=(x3-x2)/(y3-y2);
c=(x3-x1)/(y3-y1);

if(a==b && b==c && c==a)
{
 printf("YES");
}
else printf("NO");

}
