#include <stdio.h>

int main(int argc, char* argv[]) 
{
	printf("\n%d",argc);
	printf("%s",argv[0]);
	printf("%s\t %s\t %s\t ",argv[1],argv[2],argv[3]);
	return 0;
}
