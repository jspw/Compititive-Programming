#include<stdio.h>
int main()
{
    int a,b,c,i,sum;
    int bal =0;
    int T=1;
    while(scanf("%d%d%d",&a,&b,&c) != T)


        if(a<1||b<2||c<4)
       {
            printf("%d\n",bal);
            continue;
        }

        for(int i=1;i;i++)
        {
            if(i>a||2*i>b||i*4>c)
            {
                sum=(i-1)+2*(i-1)+4*(i-1);
                printf("%d\n",sum);
                break;
            }
        }


    return 0;
}
