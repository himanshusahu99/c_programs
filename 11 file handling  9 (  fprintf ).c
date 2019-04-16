#include<stdio.h>
int main()
{

    int roll,i;
    char name[100];
    float mark;
    FILE *jp;

 jp = fopen("ag.txt","w");

 for(i=0; i<2; i++)
 {
    scanf("%d%s%f",&roll,name,&mark);
    fprintf(jp,"%d\t %s\t %f\n",roll,name,mark);
 }

 fclose(jp);

 return 0;

}
