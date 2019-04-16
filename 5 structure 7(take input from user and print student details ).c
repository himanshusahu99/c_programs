#include<stdio.h>
#include<stdlib.h>
 struct student
 {

     int rno;
     char name[30];
     float m1, m2, m3;

 };
 // name roll no. marks(3 sub)

 int main ()
 {
     struct student x[5];
     int i,rn ;
     float p;

     for (i=0; i<5; i++)
     {
         printf("enter name\troll no\t marks(three subject)\n");
         fflush(stdin);
         gets(x[i].name);
         scanf("%d%f%f%f", &x[i].rno, &x[i].m1, &x[i].m2, &x[i].m3 );
     }

   /*  for (i=0; i<5; i++)
     {
         printf("%s\t%d\t%f", x[i].name, x[i].rno, (x[i].m1+x[i].m2+x[i].m3)*100/300 );
     }
*/

// roll no ke help se student details nikalne ke liye

     printf("enter roll no. ");
     scanf("%d",&rn);
     for(i=0; i<5; i++)
     {
         if( x[i].rno == rn)
          {
               printf("\nname-  %s\nmarks = %f\t%f\t%f\npercentage- %f", x[i].name, x[i].m1, x[i].m2, x[i].m3, (x[i].m1+x[i].m2+x[i].m3)*100/300 );
          break;
          }

     }
 return 0;



 }
