#include<stdio.h>
#include<time.h>

int main()
{
    time_t str, end;
    time(&str);
    int i,k,a[5]={10,20,30,40,50};

    for (i=0;  i<5; i++)
    {
        printf("%d ",*(a+i));

    }
    time(&end);
    k=end-str;
    printf("%d",k);

return 0;}
