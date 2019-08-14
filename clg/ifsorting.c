#include<stdio.h>
#include<time.h>

int main ()
{
 time_t str,end; 
 int a,b,c;
 double t1;

 printf("enter 3 no ");
scanf("%d%d%d",&a,&b,&c);

time(&str);

 if ( a>b && a>c)

{ if (b>c)
  { printf("%d %d %d", a,b,c);}
 else {printf("%d %d %d" ,a,c,b);}    
}

 if ( b>a && b>c)

{ if (a>c)
  { printf("%d %d %d", b,a,c);}
 else {printf("%d %d %d" ,b,c,a);}    
}

if ( c>a && c>b)

{ if (a>c)
  { printf("%d %d %d", c,a,b);}
 else {printf("%d %d %d" ,c,b,a);}    
}

time(&end);

t1=end-str;

printf("\n");

time(&end);
t1=end-str;
printf("%lf",t1);
return 0;



}
