#include<stdio.h>
#include<string.h>
int main(int argc,char* argv[])
{
	char c[100];
	int i,j,l,k=0;
	printf("%d\n",argc);
	
	strcpy(c, argv[1]);
	l=strlen(c);
	    
	for(i=0; c[i]!='\0' ; i++)
	{
		if(c[i] != c[(l-1)-i] )
			k++;
	}
	
	if(k==0)
		printf("YES");
	else
		printf("NO");
		    
	      

return 0;
}
