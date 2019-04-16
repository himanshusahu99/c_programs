// bahut sare input lena hai(bina array use kiye) aur btana hai ki unme total kitne different no. hai

#include<stdio.h>
int main()
{
    int i,a=0,n,count=0;


    printf("enter no.");

    do
    {
            scanf("%d",&n);

           if(a!=n)
            count++;
           a=n;



    } while(n != (-1));

    count=count-1;
    printf("total diff. no.= %d",count);

    return 0;

}
