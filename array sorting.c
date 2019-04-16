#include<stdio.h>
#include<conio.h>

int main()
{
 int a[5], k,i,j;
 printf("enter array\n");

 for(i=0; i<5; i++)
 {
      scanf("%d", &a[i]);
 }

 // sorting krne ke liye
    for (i=0; i<=3; i++)
 {
      for(j=i+1; j<=4; j++)
      { if(a[i]>a[j])
        {
         k=a[i];
          a[i]=a[j];
          a[j]=k;
     }
      }
 }

 for (i=0; i<5; i++)
 {
    printf("%d ",a[i]);
 }
return 0;
    }
