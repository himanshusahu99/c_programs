#include<stdio.h>
#include<stdlib.h>

struct library
{

int rnum;
long int ddmmyy;
char bname[100];

};

int main()
{
struct library x[5];
int i;
long int j;

//input dene ke liye
for(i=0; i<2; i++)
{
  printf("enter book name\t  ");
  fflush(stdin);
  gets(x[i].bname);

  printf("enter student roll number\t ");
  scanf("%d",&x[i].rnum);

  printf("date of issue(ddmmyy)- ");
  scanf("%ld",&x[i].ddmmyy);

  printf("\n\n");

}

printf("\n");
// printf krane ke liye
printf("book name\t student roll number\t date of issue\n");
for (i=0; i<2; i++)
{

    printf("%s\t\t %d\t\t\t %ld",x[i].bname, x[i].rnum, x[i].ddmmyy);

printf("\n");
}

// book le jane wale ka roll num khojne ke liye(datewise)
printf("\n");

printf("enter date(ddmmyy) ");
scanf("%ld",&j);

printf("book name\t student roll number\n");
for (i=0; i<2; i++)
{
    if(j == x[i].ddmmyy)
    {

        printf("%s\t\t %d",x[i].bname,x[i].rnum);
        printf("\n");
    }
    else
  { printf("Not issued any book\n");


    }

}



return 0;
}
