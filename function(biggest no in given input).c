#include<stdio.h>
#include<conio.h>

void grtn()
{
  int a,b,c,d;
  printf("enter three no.");
    scanf("%d%d%d", &a, &b, &c);

   if (a>b && a>c)
   { printf("biggest no. is %d", a);

    }

 if (b>c && b>a)
 {
     printf("biggest no. is %d", b);
 }

 if (c>a && c>b)
 {
     printf("biggest no. is %d ",c);
 }
}

// function  ko print krane  ke liye

void main()
{
  grtn();
 return 0;
    }
