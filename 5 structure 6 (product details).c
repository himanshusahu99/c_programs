#include<stdio.h>

struct product
{
    int id,qnty,prc;
    char name[100];
};

int main()
{
    struct product x[2];

    int i,act,id1,q1,k;
    printf("Pid  pname  Quantity  price\n");

    for(i=0; i<2; i++)
    {
        scanf("%d%s%d%d",&x[i].id,&x[i].name,&x[i].qnty,&x[i].prc);

    }
    while(1)
    {
        printf("\n\n\npress 1 to sell\n");
        printf("press 2 to Purchase\n");
        printf("press 3 to Show all things\n");
        printf("press 4 to end\n\n\n");

        scanf("%d",&act);

        if(act==1)
        {
            printf("enter product id ");
            scanf("%d",&id1);
            printf("Quantity to sell ");
            scanf("%d",&q1);

              k=0;
            for (i=0; i<2; i++)
            {
                if(id1==x[i].id)
                {
                    k=1;
                    if(q1 <= x[i].qnty)
                    {
                        printf("YOUR BILL= %d\n\n",q1*x[i].prc);
                        x[i].qnty = x[i].qnty-q1;

                    }

                    else
                        printf("Available product only =  %d, please enter valid quantity\n",x[i].qnty);
                }

            }
            if (k==0)
                printf("\n\t enter valid product id");

        }


        else if ( act == 2)
        {
            printf("enter product id ");
            scanf("%d",&id1);
            printf("Quantity to Purchase ");
            scanf("%d",&q1);


           k=0;
            for(i=0; i<2; i++)
            {
                if (id1 == x[i].id)
                {
                    k=1;
                    printf("YOUR BILL = %d\n\n",q1*x[i].prc);
                    x[i].qnty=x[i].qnty+q1;
                }


            }
            if (k==0)
                printf("\n\tenter valid product id");

        }

        else if (act == 3)
        {
            printf("Pid\t pname\t\t Quantity\t price\n");
            for (i=0; i<2; i++)
            {
                printf("%d\t %s\t\t %d\t\t %d\n",x[i].id,x[i].name,x[i].qnty,x[i].prc);
            }
        }

        else if (act == 4)
            break;
    }
    return 0;
}
