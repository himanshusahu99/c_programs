#include<stdio.h>
int main()

{

int age;
char ms,g;

printf("Enter age, MS(y or n) , g(m or f)\n ");

scanf("%d %c %c",&age,&ms,&g);

printf("\n");

if (ms == 'y')
	printf("YES");
else 
{	if(g =='m')
		{ if(age>30)
		  	printf("YES");
		  else 	
			printf("NO");
		}
	else if (g == 'f')
		{ if(age>25)
			printf("YES");
		  else 
			printf("NO");
		}
}
printf("\n");
return 0;
}
