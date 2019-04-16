#include<stdio.h>
#include<stdlib.h>
 struct student
 {

     int rno, tmark;
     char name[30];
     float m1, m2, m3;

 };
 // name roll no. marks(3 sub)

 int main ()
 {
     struct student x[5],k;
     int i,rn,j;
     float p;
     char w[100];


     for (i=0; i<5; i++)
     {
         printf("enter name\troll no\t marks(three subject)\n");
         fflush(stdin);
         gets(x[i].name);
         scanf("%d%f%f%f", &x[i].rno, &x[i].m1, &x[i].m2, &x[i].m3 );
         x[i].tmark=x[i].m1+x[i].m2+x[i].m3;

     }

   //total marks se sorting krne ke liye

    for (i=0; i<5; i++)
     {
         for(j=i+1; j<5; j++)
         {
           if(x[i].tmark>x[j].tmark)
           {
               k=x[i];
               x[i]=x[j];
               x[j]=k;

           }
         }

     }

     printf("class topper list ");

     for(i=0; i<5; i++)
   {
         printf("\nname-  %s\ntotal marks = %d", x[i].name, x[i].tmark );

    }


 return 0;

 }
