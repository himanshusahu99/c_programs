#include<stdio.h>
int main()
{

int tn,ft,hd,amt;

printf("enter the amount " );
scanf("%d",&amt);

hd=amt/100;
amt=amt%100;
ft=amt/50;
amt=amt%50;
tn=amt/10;
printf("100= %d\n50=%d\n10= %d\n",hd,ft,tn);
return 0; 
}

