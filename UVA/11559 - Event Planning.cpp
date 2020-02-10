#include<stdio.h>
int main()
{
    long frnd,bud,hotel,week,amount,cost=15000000,b,p,visit,i,j,room;
    while(scanf("%ld%ld%ld%ld",&frnd,&bud,&hotel,&week)==4)
    {
        for(i=0;i<hotel;i++)
        {
            scanf("%ld",&amount);
            for(j=0;j<week;j++)
            {
                scanf("%ld",&room);
                p=0;
                if(room>=frnd)
                {
                    p=amount*frnd;
                    if(cost>p)
                    cost=p;
                }
            }
        }
            if(cost>bud)
            printf("stay homen\n");
            else
            printf("%ld\n",cost);
            cost=15000000;


        }

    return 0;
}
