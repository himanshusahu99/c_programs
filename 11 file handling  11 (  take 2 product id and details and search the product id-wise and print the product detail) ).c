#include<stdio.h>

int main()
{
   // pid = product id
   int pid, pquantity,i,psearch;
   char pname[100];
   float pprice, total;

   FILE *jp;

   jp = fopen("productdetails.txt","w");

   for(i=0; i<2; i++)
   {
       scanf("%d%s%d%f",&pid,pname,&pquantity, &pprice);

       total=pquantity * pprice;
       fprintf(jp,"%d\t %s\t %d\t %f\t %f\n",pid,pname,pquantity, pprice, total);
   }

   fclose(jp);


   jp = fopen("productdetails.txt","r");

   printf("enter product id ");
   scanf("%d",&psearch);
`
   for(i=0; i<2; i++)
   {
     fscanf(jp,"%d%s%d%f%f",&pid,pname,&pquantity, &pprice, &total);
     if( pid == psearch)
     {


        printf("pid\t pname\t pquantity\t pprice\t\t total price\n");
        printf("%d\t %s\t %d\t\t %f\t %f\n",pid, pname,pquantity, pprice, total);
     }

   }

   fclose(jp);

   return 0;
}
