
#include<conio.h>
#include<stdio.h>

int main()
{

    int a=2, b;
    b= ++a + ++a + a++;
    printf("a=%d\tb=%d\n", a,b);
    return 0;
}
