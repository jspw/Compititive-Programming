#include<stdio.h>
int main()
{

    int b[100];
    int i,k,j,sum,s,ck=0,p;
    for(s=0; s<15; s++)
    {
        for(i=2; i<=50; i++)
        {


            for(j=1; j<=i; j++)
            {
                if(i%j==0)
                {
                    ck++;

                }

            }
            if(ck==2)
                    {
                        b[s]=i;
                    }

        }
    }
    /*
        b[0]=2;
        b[1]=5;
        for(s=2;s<50;s++)
        {
            sum=b[s-1]+ b[s-2];
            if(sum%2==0)
                printf("1\n");
            else printf("bal\n");
        }

        */
    for(s=0; s<15; s++)
        printf("%d ",b[s]);




    return 0;
}
