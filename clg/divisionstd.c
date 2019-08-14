#include<stdio.h>
int main()

{
int a,b,c,d,e,f,per;
printf("Enter marks (5) ");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

per= (a+b+c+d+e)/5;
printf("percnetage = %d%% ",per);

if (per>60)
	printf(" I division");
else 	
	{
	 if(per>50)
		printf(" II");
	 else
		if (per>40)
			printf(" III");
		else 
			printf(" Fail"); 
	}


printf("\n");
return 0; 
}

