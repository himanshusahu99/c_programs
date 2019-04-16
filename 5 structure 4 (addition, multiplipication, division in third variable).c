#include<stdio.h>

struct math
{
    int a,b;
};

int main ()
{
 // int m1, m2, m3, m4;
 struct math m1, m2, m3, m4,m5;

 printf("enter no.\n" );
 scanf("%d%d",&m1.a, &m1.b);

 printf("enter no.\n");
 scanf("%d%d", &m2.a, &m2.b);

 m3.a= m1.a+m2.a;
 m3.b=m1.b + m2.b;
 printf("addition = %d %d\n", m3.a, m3.b );

 m4.a = m1.a * m2.a;
 m4.b = m1.b * m2.b;
 printf("multpl= %d %d\n", m4.a, m4.b);

 m5.a = m1.a / m2.a;
 m5.b = m1.b / m2.b;
 printf("div= %d %d\n",m5.a, m5.b);

 return 0;
}
