#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ch,n1,n2;

    do
    {
        printf("enter operation(+, -, *, / )  ");
        fflush(stdin);
        scanf(" %c",&ch);

        switch(ch)
        {
        case '+':
            printf("enter two no ");
            scanf("%d%d",&n1,&n2);
            printf("= %d ", n1+n2);
            break;

        case '-':
            printf("enter two no ");
            scanf("%d%d",&n1,&n2);
            printf("= %d", n1-n2);
            break;

        case '*':
            printf("enter two no ");
            scanf("%d%d",&n1,&n2);
            printf("= %d",n1*n2);
            break;

        case '/':
            printf("enter two no ");
            scanf("%d%d",&n1,&n2);
            printf("= %d",n1/n2);
            break;

        default:
            printf("using wrong operation ");

        }

        printf("\n do you want to calculate again (enter Y/N) ");
        fflush(stdin);
        scanf("%c", &ch);

    }
    while (ch!='N');

return 0;
}
